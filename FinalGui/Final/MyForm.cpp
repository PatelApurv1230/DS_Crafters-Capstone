#include <string>
#include <msclr\marshal_cppstd.h>
System::String^ Source(std::string cpath_,std::string npath_, int k);
#include "MyForm.h"
#include <filesystem>

#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
namespace file_s = std::filesystem;
//namespace file_s = filesystem;
[STAThreadAttribute]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	$safeprojectname$::MyForm form;
	Application::Run(% form);
}

#include <fstream>
#include <cctype>
#include <algorithm> 
#include <unordered_map>
#include <map>
System::String^ Source(string path_, std::string npath_, int k)
{
    string temp;

    string n_documents;
    unordered_map <string, int>initial_map, NotCountWord;

    string NCP = npath_;
 

    ifstream nc(NCP);//C:\\Users/DELL/Desktop/DSA/Capstone/DS_Crafters-Capstone/notcount.txt"
    while (nc.good())
    {
        nc >> temp;
        for (char& c : temp) {
            c = tolower(c);
        }
        if (NotCountWord.count(temp) == 0)
        {
            NotCountWord.insert(pair<string, int>(temp, 1));
        }

    }
    //cin>>path_;
    for (const auto& entry : file_s::directory_iterator(path_))
    {
        ifstream initialDocuments(entry.path());

        while (!initialDocuments.eof())
        {
            initialDocuments >> n_documents;
            for (char& c : n_documents) {
                if (c == '.' || c == ',' || c == '"')
                {
                    n_documents.erase(remove(n_documents.begin(), n_documents.end(), c), n_documents.end());
                    continue;
                }
                c = tolower(c);
            }
            if (initial_map.count(n_documents) == 0)
            {
                initial_map.insert(pair<string, int>(n_documents, 1));
            }
            else {
                initial_map[n_documents]++;
            }
        }

    }
   
    multimap<int, string> sorted_map;
    for (const auto& pair : initial_map) {
        if (NotCountWord.count(pair.first) == 0)
            sorted_map.insert({ pair.second, pair.first });
    }
    System::String^ result = "";
    int i = 0;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++) {
        //of << it->first << ":" << it->second << endl;
        result += it->first;
        result += ":";
        result += msclr::interop::marshal_as<System::String^>(it->second);
        result += "\n";
        //result += gcnew System::String(("_n"));
        if (i == k - 1)
        {
            break;
        }
    }
    return result;
}
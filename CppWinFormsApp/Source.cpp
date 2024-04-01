#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm> 
#include <unordered_map>
#include <map>
using namespace std;
namespace file_s = filesystem;
void Source(string path_);
void Source(string path_)
{
    string temp;

    string n_documents;
    unordered_map <string, int>initial_map, NotCountWord;

    string NCP = "C://Users/DELL/Desktop/DSA/GUI/CppWinFormsApp/CppWinFormsApp/pri_define_word.txt";
    //cin>>NCP;

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
    int i = 0, k;
    cin >> k;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++) {
        std::cout << it->first << ": " << it->second << std::endl;

        if (i == k-1)
        {
            break;
        }
    }
}
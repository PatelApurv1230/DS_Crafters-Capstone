#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm> 
#include <unordered_map>
using namespace std;
namespace file_s=filesystem;
int main()
{
    string path_;
    int first_Ndocuments;

    cout<<"Enter the total number of initial documents: ";
    cin>>first_Ndocuments;

    string n_documents;
    unordered_map <string,int>initial_map;
    int count_=0;
    cout<<"Enter the path of file: ";
    cin>>path_;
    for(const auto& entry :file_s::directory_iterator(path_))
    {
        ifstream initialDocuments(entry.path());
        while(!initialDocuments.eof())
        {
            initialDocuments>>n_documents;
            for (char &c : n_documents) {
            if(c=='.' || c==',' || c=='"')
            {
                n_documents.erase(remove(n_documents.begin(),n_documents.end(),c), n_documents.end());
                continue;
            }
            c = tolower(c);
            }
            if(initial_map.count(n_documents)==0)
            {
                initial_map.insert(pair<string,int>(n_documents,1));
            }
            else{
                initial_map[n_documents]++;
                }
        }
            count_++;
            if(count_==first_Ndocuments)
            {
                break;
            }
    }
     for (auto it = initial_map.begin(); it != initial_map.end(); it++) {
            cout << it->first << ": " << it->second << endl;
            }
    return 0;
}
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm> 
#include <unordered_map>
#include <map>
using namespace std;
namespace file_s=filesystem;
int main()
{
    string path_;
    int first_Ndocuments;
    string temp;

    string n_documents;
    unordered_map <string,int>initial_map,NotCountWord;
    int count_=0;
    string NCP="C://Users/DELL/Desktop/DSA/GUI/CppWinFormsApp/CppWinFormsApp/pri_define_word.txt";
    //cin>>NCP;
    
    ifstream nc(NCP);//C:\\Users/DELL/Desktop/DSA/Capstone/DS_Crafters-Capstone/notcount.txt"
    while(nc.good())
    {
        nc>>temp;
        for (char &c : temp) {
            c = tolower(c);
        }
        if(NotCountWord.count(temp)==0)
        {
            NotCountWord.insert(pair<string,int>(temp,1));
        }
            
    }

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
        cout<<count_<<" "<<entry.path()<<" doucument scanned succesfully \n"; 
        if(count_==first_Ndocuments)
        {
            break;
        }
    }
      
    //  for (auto it = initial_map.begin(); it != initial_map.end(); it++) {
    //         cout << it->first << ": " << it->second << endl;
    //  }
    // cout<<"Enter the path of folder: ";
    // cin>>path_;
    // for(const auto& entry :file_s::directory_iterator(path_))
    // {
    //     ifstream initialDocuments(entry.path());
    //     count_++;
    //     if(count_==first_Ndocuments)
    //     {
    //         break;
    //     }
    // }
    
    // for (auto it = initial_map.begin(); it != initial_map.end(); it++) {
    // cout << it->first << ": " << it->second << endl;
    // }
    
    multimap<int, string> sorted_map;
    for (const auto& pair : initial_map) {
        if(NotCountWord.count(pair.first)==0)
        sorted_map.insert({pair.second, pair.first});
    }

    // Print the sorted map
    cout << "Sorted Map by Value:" << endl;
    // for (const auto& pair : sorted_map) {
    //     cout << pair.second << ": " << pair.first << endl;
    // }
    int i=0,k;
    cout<<"Enter k :";
    cin>>k;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it,i++) {
        std::cout << it->first << ": " << it->second << std::endl;
    
        if(i==k)
        {
            break;
        }
    }
    return 0;
}
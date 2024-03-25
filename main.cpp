#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <unordered_map>
using namespace std;
namespace file_s=filesystem;
int main()
{
    string path_;
    int first_Ndocuments;

    cout<<"Enter the total number of initial documents: ";
    cin>>first_Ndocuments;

    int count_=0;
    cout<<"Enter the path of file: ";
    cin>>path_;
    for(const auto& entry :file_s::directory_iterator(path_))
    {
        ifstream initialDocuments(entry.path());
        count_++;
        if(count_==first_Ndocuments)
        {
            break;
        }
    }
    string temp;
    unordered_map <string,int>m1;
    for(int i=0;i<10;i++)
    {
        getchar();
        cin>>temp;
        for (char &c : temp) {
        c = tolower(c);
        }
        if(m1.count(temp)==0)
        {
            m1.insert(pair<string,int>(temp,1));
        }
        else{
            m1[temp]++;
        }
    }
    for (auto it = m1.begin(); it != m1.end(); it++) {
    cout << it->first << ": " << it->second << endl;
    }
    return 0;
}
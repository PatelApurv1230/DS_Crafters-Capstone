#include <iostream>
#include <bits/stdc++.h>
#include <filesystem>
#include <fstream>
#include <string>
using namespace std;

namespace file_s=filesystem;


int main()
{
    string path_;
    int first_Ndocuments;

    cout<<"Enter the total number of initial documents: ";
    cin>>first_Ndocuments;

    int count_=0;
    string path_;
    while(count_!=first_Ndocuments)
    {
        cout<<"Enter the path of folder: "<<"\n";
        cin>>path_;
    for(const auto& entry :file_s::directory_iterator("path_"))
    {
        ifstream initialDocuments(entry.path());
        count_++;

    }
    }


    return 0;
}







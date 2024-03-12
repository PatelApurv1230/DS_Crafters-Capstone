#include <iostream>
#include <filesystem>
#include <string>
#include <cctype>
#include <unordered_map>
using namespace std;
int main()
{

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
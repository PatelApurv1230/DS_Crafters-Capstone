#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <unordered_map>
#include <map>
using namespace std;
namespace fs = filesystem;

void not_count_word(unordered_map<string, int> &NotCountWord, string NCP)
{
    string temp;
    for (const auto &entry : fs::directory_iterator(NCP))
    {
        ifstream nc(entry.path());
        while (!nc.eof())
        {
            nc >> temp;
            for (char &c : temp)
            {
                if (c == '.' || c == ',' || c == '"')
                {
                    temp.erase(remove(temp.begin(), temp.end(), c), temp.end());
                    continue;
                }
                c = tolower(c);
            }
            if (NotCountWord.count(temp) == 0)
            {
                NotCountWord.insert(pair<string, int>(temp, 1));
            }
        }
    }
}

int main()
{
    string NCP;
    unordered_map<string, int> initial_map, NotCountWord;
    int select_;
    std::cout << "Press 1 to not count frequency of word which is in pre-defined file:"
              << "\n"
              << "Press 2 to not count word from particular file:"
              << "\n"
              << "Press 3 to not count word from particular word set:"
              << "\n";

    std::cin >> select_;
    switch (select_)
    {

    case 1:
    {
        NCP = "C:\\Users\\Dell\\Desktop\\Pre-defined_Words"; // In this locatio there is folder and in folder a txt file for pre-defined words
        not_count_word(NotCountWord, NCP);
    }
    break;

    case 2:
    {
        std::cout << "Enter Not Count file Path :\n";
        std::cin >> NCP;
        not_count_word(NotCountWord, NCP);
    }
    break;

    case 3:
    {
        std::cout << "Enter the Set of Word:"
                  << "\n";
        int num = 1;
        while (num != 2)
        {
            std::cout << "Press 1 to add word in set:"
                      << "\n"
                      << "Press 2 exit:"
                      << "\n";

            cin >> num;
            switch (num)
            {

            case 1:
            {
                cout << "Enter the word:"
                     << "\n";
                string nc_word;
                cin>>nc_word;
                NotCountWord.insert(pair<string, int>(nc_word, 1));
            }
            break;

            case 2:
            {
                ;
            }
            break;

            default:
            {
                cout << "Choose Valid Option !"
                     << "\n";
            }
        }
    }
    }
    break;

    default:
    {
        cout << "Choose Valid Option!"
             << "\n";
    }
    }

    int count_ = 0;
    string path_;
    int first_Ndocuments;
    std::cout << "Enter the total number of initial documents: ";
    std::cin >> first_Ndocuments;
    string n_documents;
    while (count_ != first_Ndocuments)
    {
        std::cout << "Enter the path of file: ";
        std::cin >> path_;
        for (const auto &entry : fs::directory_iterator(path_))
        {
            ifstream initialDocuments(entry.path());

            while (!initialDocuments.eof())
            {
                initialDocuments >> n_documents;
                for (char &c : n_documents)
                {
                    if (c == '.' || c == ',' || c == '"')
                    {
                        n_documents.erase(remove(n_documents.begin(), n_documents.end(), c), n_documents.end());
                        continue;
                    }
                    c = tolower(c);
                }
                if (NotCountWord.count(n_documents) == 0)
                {
                    if (initial_map.count(n_documents) == 0)
                    {
                        initial_map.insert(pair<string, int>(n_documents, 1));
                    }
                    else
                    {
                        initial_map[n_documents]++;
                    }
                }
            }
            count_++;
            std::cout << count_ << " " << entry.path() << " doucument scanned succesfully \n";
            if (count_ == first_Ndocuments)
            {
                break;
            }
        }
        if (count_ == first_Ndocuments)
        {
            break;
        }
    }
    multimap<int, string> sorted_map;
    for (const auto &pair : initial_map)
    {
        sorted_map.insert({pair.second, pair.first});
    }

    std::cout << "Sorted Map by Value:" << endl;
    for (const auto &pair : sorted_map)
    {
        std::cout << pair.second << ": " << pair.first << endl;
    }
    int i = 0, k;
    std::cout << "Enter k :";
    std::cin >> k;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++)
    {
        std::cout << it->first << ": " << it->second << std::endl;

        if (i == k - 1)
        {
            break;
        }
    }
    return 0;
}

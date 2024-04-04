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
    std::cout <<" <<----------WELCOME TO WORD CLOUD GENERATOR---------->>"<< "Please! Press 1 to not count frequency of word which is in pre-defined file,\n"
              << "Press 2 to not count word from particular file and\n"
              << "Press 3 to not count word from particular word set :- ";

    std::cin >> select_;
    switch (select_)
    {

    case 1:
    {
        NCP = "C:\\Users\\Dell\\Desktop\\Pre-defined_Words"; // In this location there is folder and in folder a txt file for pre-defined words
        not_count_word(NotCountWord, NCP);
    }
    break;

    case 2:
    {
        std::cout << "<---You selected option 2---> \nPlease! Enter Not Count file Path :- \n";
        std::cin >> NCP;
        not_count_word(NotCountWord, NCP);
    }
    break;

    case 3:
    {
        std::cout << "<---You selected option 3---> \nPlease! Enter the Set of Word :- ";
        int num = 1;
        while (num != 2)
        {
            std::cout << "Please! Press 1 to add word in set or\n"
                      << "Press 2 exit :- ";

            cin >> num;
            switch (num)
            {

            case 1:
            {
                cout << "<---You selected option 1--->\nPlease! Enter the word :- ";
                string nc_word;
                cin >> nc_word;
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
                cout << "'Please Choose Valid Option!' \n";
            }
            }
        }
    }
    break;

    default:
    {
        cout << "'Please Choose Valid Option!' \n";
    }
    }

    int count_ = 0;
    string path_;
    int first_Ndocuments;
    std::cout << "Please! Enter the total number of initial documents :- ";
    std::cin >> first_Ndocuments;
    string n_documents;
    while (count_ != first_Ndocuments)
    {
        std::cout << "Please! Enter the path of file :- ";
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
    int num_2 = 1;

    while (num_2 != 4)
    {
        std::cout << "Please! Press 1 to add file for counting frequency,\n"
                  << "Press 2 to add a word which will not be counted for frequency\n"
                  << "Press 3 to get top k most frequently used words\n"
                  << "Press 4 to Exit : ";

        std::cin >> num_2;

        switch (num_2)
        {
        case 1:
        {
            string path_new;
            string new_documents;
            std::cout << "<---You selected option 1---> \nPlease! Enter the path of file :- ";
            std::cin >> path_new;
            for (const auto &entry : fs::directory_iterator(path_new))
            {
                ifstream new_Documents(entry.path());

                while (!new_Documents.eof())
                {
                    new_Documents >> new_documents;
                    for (char &c : new_documents)
                    {
                        if (c == '.' || c == ',' || c == '"')
                        {
                            new_documents.erase(remove(new_documents.begin(), new_documents.end(), c), new_documents.end());
                            continue;
                        }
                        c = tolower(c);
                    }
                    if (NotCountWord.count(new_documents) == 0)
                    {
                        if (initial_map.count(new_documents) == 0)
                        {
                            initial_map.insert(pair<string, int>(new_documents, 1));
                        }
                        else
                        {
                            initial_map[new_documents]++;
                        }
                    }
                }
            }
        }
        break;

        case 2:
        {
            string new_nc_word;

            std::cout << "<---You selected option 2---> \nPlease! Enter the new word for not counting :- ";
            std::cin >> new_nc_word;

            if (initial_map.count(new_nc_word) > 0)
            {
                initial_map.erase(new_nc_word);
            }
            NotCountWord.insert(pair<string, int>(new_nc_word, 1));
        }
        break;

        case 3:
        {
            multimap<int, string> sorted_map;
            for (const auto &pair : initial_map)
            {
                sorted_map.insert({pair.second, pair.first});
            }
            int i = 0, k;
            std::cout << "<---You selected option 3---> \nPlease! Enter the value of K :- ";
            std::cin >> k;
            for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++)
            {
                std::cout << it->first << ": " << it->second << std::endl;

                if (i == k - 1)
                {
                    break;
                }
            }
        }
        break;

        case 4:
        {
        }
        break;

        default:
        {
            cout << "'Please Choose Valid Option!' \n";
        }
        }
    }

    return 0;
}

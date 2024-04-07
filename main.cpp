#include <stdio.h>
// ANSI color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLD    "\033[1m"      /* Bold */



#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <iomanip>
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
void convert_file_type(string &npath_)
{
    string temp;
    int npath_length = npath_.size();
    if (npath_[npath_length - 1] == 'f')
    {
    temp = npath_;
    temp[npath_length - 1] = 't';
    temp[npath_length - 2] = 'x';
    temp[npath_length - 3] = 't';
    string command = "pdftotext " + npath_ + " " + temp;
    system(command.c_str());
    npath_ = temp;
    }
}

int main()
{
    string NCP;
    unordered_map<string, int> initial_map, NotCountWord;
    int select_,choice_save;
    std::cout << GREEN BOLD << " <<----------WELCOME TO WORD CLOUD GENERATOR---------->>" << RESET << "\n" << BLUE << "Press 1 to not count frequency of word which is in pre-defined file," << RESET << "\n"
              << MAGENTA <<"Press 2 to not count word from particular file and" << RESET << "\n"
              << CYAN << "Press 3 to not count word from particular word set :- " << RESET ;

    std::cin >> select_;
    std::cout<<"\n";
    switch (select_)
    {

    case 1:
    {
        NCP = "Pre-defined_Words"; // In this location there is folder and in folder a txt file for pre-defined words

        not_count_word(NotCountWord, NCP);
        std::cout<<"\n";
    }
    break;

    case 2:
    {
        std::cout << YELLOW << "<---You selected option 2---> "<< RESET <<"\n" << MAGENTA << "Enter Not Count file Path :- " << RESET ;
        std::cin >> NCP;
        convert_file_type(NCP);
        not_count_word(NotCountWord, NCP);
        std::cout<<"\n";
    }
    break;

    case 3:
    {
        std::cout << YELLOW << "<---You selected option 3---> " << RESET << "\n" << MAGENTA << "Enter the Set of Word :-" << RESET << "\n";
        int num = 1;
        while (num != 2)
        {
            std::cout << YELLOW <<"Press 1 to add word in set or " << RESET << " \n"
                      << GREEN << "Press 2 exit :- " << RESET;

            cin >> num;
            std::cout<<"\n";
            switch (num)
            {

            case 1:
            {
                std::cout << YELLOW << "<---You selected option 1--->" << RESET << "\nEnter the word :- ";
                string nc_word;
                std::cin >> nc_word;
                NotCountWord.insert(pair<string, int>(nc_word, 1));
                std::cout<<"\n";
            }
            break;

            case 2:
            {
                 std::cout<<"\n";;
            }
            break;

            default:
            {
                std::cout << RED << "'Please Choose Valid Option!' " << RESET << " \n";
                std::cout<<"\n";
            }
            }
        }
    }
    break;

    default:
    {
        std::cout << RED << "'Please Choose Valid Option!' " << RESET << "\n";
        std::cout<<"\n";
    }
    }

    int count_ = 0;
    string path_;
    int first_Ndocuments;
    std::cout <<CYAN<< "Enter the total number of initial documents :- "<<RESET;
    std::cin >> first_Ndocuments;
    std::cout<< GREEN BOLD <<"--------------------------------------------------" << RESET << "\n";
    string n_documents;
    while (count_ != first_Ndocuments)
    {
        std::cout << CYAN << "Enter the path of file :- " << RESET ;
        std::cin >> path_;
        for (const auto &entry : fs::directory_iterator(path_))
        {
            
            string convert_=entry.path().string();
            convert_file_type(convert_);
            ifstream initialDocuments(convert_);

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
            std::cout << count_ << " " << convert_ << MAGENTA << " document scanned succesfully " << RESET << "\n";
            if (count_ == first_Ndocuments)
            {
                std::cout<<"\n";
                break;
            }
        }
        if (count_ == first_Ndocuments)
        {
            std::cout<<"\n";
            break;
        }
    }
    int num_2 = 1;

    while (num_2 != 4)
    {
        std::cout << CYAN << "Press 1 to add file for counting frequency," << RESET << "\n"
                  << MAGENTA << "Press 2 to add a word which will not be counted for frequency" << RESET << "\n"
                  << BLUE << "Press 3 to get top k most frequently used words" << RESET << "\n"
                  << GREEN << "Press 4 to Exit : " << RESET;

        std::cin >> num_2;
        std::cout<<"\n";
        switch (num_2)
        {
        case 1:
        {
            string path_new;
            string new_documents;
            std::cout << YELLOW << "<---You selected option 1--->" << RESET << " \n" << BLUE << "Enter the path of file :- " << RESET ;
            std::cin >> path_new;
            for (const auto &entry : fs::directory_iterator(path_new))
            {
                string convert_=entry.path().string();
                convert_file_type(convert_);
                ifstream new_Documents(convert_);
                
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
                std::cout << convert_ << MAGENTA << " document scanned succesfully " << RESET << " \n";
            }
            std::cout<<"\n";
        }
        break;

        case 2:
        {
            string new_nc_word;

            std::cout << YELLOW << "<---You selected option 2--->" << RESET << " \n" << BLUE BOLD <<"Enter the new word for not counting :- " <<RESET ;
            std::cin >> new_nc_word;

            if (initial_map.count(new_nc_word) > 0)
            {
                initial_map.erase(new_nc_word);
            }
            NotCountWord.insert(pair<string, int>(new_nc_word, 1));
            std::cout<<"\n";
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
            std::cout << YELLOW << "<---You selected option 3--->" << RESET << " \nEnter the value of K :- ";
            std::cin >> k;
            printf( BOLD "------------------------------------------------------------" RESET "\n" );
            printf( BOLD "|" RESET BLUE BOLD "Frequency" RESET BOLD " || " RESET GREEN BOLD "Word                                         " RESET BOLD "|" RESET "\n" );
            printf( BOLD "------------------------------------------------------------" RESET " \n" );
            for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++)
            {
                printf( BOLD "|" RESET BLUE BOLD "%-10d" RESET BOLD "|| " RESET GREEN BOLD "%-45s" RESET BOLD "|" RESET "\n" , it->first, it->second.c_str());


                if (i == k - 1)
                {
                    break;
                }
            }
            printf( BOLD "------------------------------------------------------------" RESET "\n" );
        }
        break;

        case 4:
        {

            cout<< MAGENTA BOLD<< "Do you want to save file to output"<<RESET GREEN<<"\nPress 1 Yes"<<"\nPress 2 No\n"<<RESET;

            cin>>choice_save;
            
            while(choice_save!=2)
            {
            switch (choice_save)
            {
            case 1:
            {   
                multimap<int, string> sorted_map;
                for (const auto &pair : initial_map)
                {
                    sorted_map.insert({pair.second, pair.first});
                }
                
                ofstream OF("Output.txt");
                OF<<"------------------------------------------------------------"<< "\n" ;
                OF<<"|Frequency || Word|"<<"\n";
                OF<<"------------------------------------------------------------"<< "\n" ;
                for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it)
                { 
                      OF << std::left << "|" << std::setw(10) << it->first << "|| " << std::setw(45) << it->second << "|\n";

                }
                OF<<"------------------------------------------------------------"<< "\n" ;
                OF.close();
               return 0;
            }
                break;
            case 2:
                printf( MAGENTA BOLD "Thank you for Visiting , Have a Good Day !" RESET "\n" );
                break;
            default:
                printf( RED BOLD "Please select valid option" RESET "\n" );
                break;
            }
            }
             
        }
        break;

        default:
        {
            cout << RED << "'Please Choose Valid Option!'"<< RESET << "\n";
        }
        }
    }

    return 0;
}

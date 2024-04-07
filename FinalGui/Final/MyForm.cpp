
#include <SFML/Graphics.hpp>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
System::String^ Source(std::string cpath_, std::string npath_, int k, int max, int min,std::string font_path);
void SaveOutput(System::String^ str, System::String^ path);
#include "MyForm.h"
#include <filesystem>
#define NOMINMAX 
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
namespace file_s = std::filesystem;
//namespace file_s = filesystem;
//[STAThreadAttribute]

int Convertimage(std::multimap<int, string>  wordFrequencies, int k, int max, int min, std::string font_path, std::string path);
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
#include <windows.h>
#include <cstdlib> 
#include <ctime>
#include <cmath>
#include <cstdio>
#include <random>


void convert_file_type(string& path)
{
    string temp;
    int npath_length = path.size();
    if (path[npath_length - 1] == 'f')
    {
        temp = path;
        temp[npath_length - 1] = 't';
        temp[npath_length - 2] = 'x';
        temp[npath_length - 3] = 't';
        string command = "pdftotext " + path + " " + temp;
        system(command.c_str());
        path = temp;
    }
}
System::String^ Source(string path_, std::string npath_, int k, int max, int min, std::string font_path)
{


    if (path_ == "Select Directory"||path_=="")
    {
        MessageBox::Show("Please Select Directory", "Error Box", MessageBoxButtons::OK);
        String^ res = "";
        return res;
        
    }
    if (font_path == "Font" )
    {
        MessageBox::Show("Please Select .ttf file", "Error Box", MessageBoxButtons::OK);
        
        String^ res = "";
        return res;

    }
    int font_path_length = font_path.size();

    if (!(font_path[font_path_length - 1] == 'f' && font_path[font_path_length - 2] == 't' && font_path[font_path_length - 3] == 't'))
    {
        MessageBox::Show("Please Select .ttf file", "Error Box", MessageBoxButtons::OK);

        String^ res = "";
        return res;
      
    }
   

    convert_file_type(npath_);

    string n_documents;
    unordered_map <string, int>initial_map, NotCountWord;

    string NCP = npath_;

    if (npath_==""|| npath_ == " ")
    {
        
    }
    else
    {
        ifstream nc(NCP);
        while (nc.good())
        {
            nc >> n_documents;
            for (char& c : n_documents) {
                if (c == '.' || c == ',' || c == '"')
                {
                    n_documents.erase(remove(n_documents.begin(), n_documents.end(), c), n_documents.end());
                    continue;
                }
                c = tolower(c);
            }
            if (NotCountWord.count(n_documents) == 0)
            {
                NotCountWord.insert(pair<string, int>(n_documents, 1));


            }
        }
    }
    for (const auto& entry : file_s::directory_iterator(path_))
    {
        string convert_ = entry.path().string();
        convert_file_type(convert_);
        ifstream initialDocuments(convert_);

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
    Convertimage(sorted_map, k, max, min,font_path,path_);
    System::String^ result = "";
    int i = 0;
    for (auto it = sorted_map.rbegin(); it != sorted_map.rend(); ++it, i++) {
       
        result += it->first;
        result += "\t:\t";
        result += msclr::interop::marshal_as<System::String^>(it->second);
        result += "\n";
       
        if (i == k - 1)
        {
            break;
        }
    }
    return result;
}
void SaveOutput(System::String^ str, System::String^ path)
{
    ofstream of(msclr::interop::marshal_as<std::string>(path) + "//Output.txt");
    of << msclr::interop::marshal_as<std::string>(str);
    MessageBox::Show("File Saved Succesfully!", "Message Box", MessageBoxButtons::OK);
    System::Diagnostics::Process^ process = gcnew System::Diagnostics::Process();
    process->StartInfo->FileName = gcnew System::String(path + "//Output.txt");
    process->Start();

}




// Function to check if two rectangles (text bounds) overlap
bool isIntersecting(const sf::FloatRect& rect1, const sf::FloatRect& rect2) {
    return rect1.intersects(rect2);
}

const int timeoutSeconds = 3;
// Function to generate a random position within the window bounds
sf::Vector2f generateRandomPosition(float maxWidth, float maxHeight) {
    float x = static_cast<float>(std::rand() % static_cast<int>(maxWidth));
    float y = static_cast<float>(std::rand() % static_cast<int>(maxHeight));
    return sf::Vector2f(x, y);
}

int Convertimage(std::multimap<int, string>  wordFrequencies, int k, int max, int min,std::string font_path,std::string path) {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // use current time as seed for random generator
    sf::Color bgColor = sf::Color::White;
   
    sf::RenderWindow window(sf::VideoMode(700, 700), "Word Cloud Example");




    sf::Font font;
    if (!font.loadFromFile(font_path)) {
        std::cerr << "Error loading font\n";
        return 1;
    }

    std::vector<sf::Text> words;
    int totalWords = 0, size = 0, maxfreq = 0;

    for (const auto& pair : wordFrequencies) {
        totalWords += pair.first;
        size++;
        if (maxfreq < pair.first)
            maxfreq = pair.first;
    }
    int c = 100;

    
    
    window.clear(bgColor);
    int i = 0;

    for (auto it = wordFrequencies.rbegin(); it != wordFrequencies.rend(); ++it, i++) {

        if (i > k)
        {
            break;
        }

        sf::Text text;
        text.setFont(font);

        text.setString(it->second);
        float scaleFactor = static_cast<float>(it->first) / totalWords;
    ok:
        int s = 25 + log(totalWords) * c * it->first / (maxfreq);
        if (s > 100)
        {
            c /= 1.25;
            goto ok;
        }
        int r, g, b;

        text.setCharacterSize(s); // Use frequency to determine size
        sf::Color randomColor(std::rand() % 256, std::rand() % 256, std::rand() % 256);
        do {
            r = std::rand() % 256;
            g = std::rand() % 256;
            b = std::rand() % 256;
        } while (r > 200 && g > 200 && b > 200);
        text.setFillColor(randomColor);
        int width = max - min;
        float deg;
        if (width != 0)
        {
            int random = rand() % width + min;
            deg = random;
        }
        else
        {
            deg = min;
        }

        text.setRotation(deg);
        bool overlapping = false;
        sf::FloatRect textBounds;


        do {
          
            
            float val = sqrt(text.getLocalBounds().width * text.getLocalBounds().width + text.getLocalBounds().height * text.getLocalBounds().height);
            sf::Vector2f position = generateRandomPosition(window.getSize().x - 100, window.getSize().y - 100);
          
            std::cout << val << " ";

            text.setPosition(position);

            // Check for overlap with existing words
            sf::FloatRect margin(0, 0, 10, 10);
            overlapping = false;
            textBounds = text.getGlobalBounds();
            textBounds.height += 10;
            textBounds.width += 10;
            static int j = 0;
            for (const auto& word : words) {
                sf::FloatRect Wind(0, 0, window.getSize().x - 50, window.getSize().y - 50);
                if (isIntersecting(textBounds, word.getGlobalBounds()) || !(isIntersecting(textBounds, Wind))) {
                    j++;
                    overlapping = true;
                    if (j > 20 * size)
                    {
                        sf::Vector2u v1(window.getSize().x * 1.35, window.getSize().y * 1.35);
                        j = 0;
                        window.setSize(v1);
                        window.display();
                    }
                    break;
                }


                word.getString();
            }

        } while (overlapping); // Repeat until no overlap


        words.push_back(text);
        window.draw(text);
        window.display();
    }

    
    sf::Event event;
    while (window.pollEvent(event)) {
        // Close window: exit
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }

    

    
    if (1)
    {
        window.clear(bgColor);
        sf::RenderWindow window2(sf::VideoMode(window.getSize().x * 1.35, window.getSize().y * 1.35), "Word Cloud Example");
        window2.clear(bgColor);
        std::cout << "updtae";
        for (auto& word : words) {

            sf::Vector2f position = word.getPosition();
            position.x = position.x + 50;
            position.y = position.y + 50;
            word.setPosition(position);

            window2.draw(word);

        }
        sf::Texture texture;
        texture.create(window2.getSize().x, window2.getSize().y);
        texture.update(window2);
        string outputpng = path + "\\Output.png";
        //std::wstring temp = wstring(outputpng.begin(), outputpng.end());

        if (texture.copyToImage().saveToFile(outputpng))
        {
            std::cout << "screenshot saved to " << "filename" << std::endl;
            ShellExecute(NULL, "open", outputpng.c_str(), NULL, NULL, SW_SHOWNORMAL);
        }
    }
    // Update the window
    window.close();
    return 0;
}























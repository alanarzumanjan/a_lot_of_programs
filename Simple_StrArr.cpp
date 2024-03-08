#include <iostream>
#include <vector>
#include <string>
using namespace std;

void input(string &line);
void length(int len);
void CheckThings(string &line, int len);
void reverse_string(string &line, int len);

int main()
{
    cout << "Welcome to Simple string array!" << endl;
    string line;

    input(line);
    int len = line.length();
    length(len);
    CheckThings(line, len);
    reverse_string(line, len);
    return 0;
}

void input(string &line)
{
    cout << endl << "Enter message [ENG]: ";
    getline(cin, line);
}

void length(int len)
{
    cout << "Lenght: " << len << endl;
}

void CheckThings(string &line, int len)
{
    int space_count = 0;
    int vowels_count = 0;
    int consonants_count = 0;
    int symbols_count = 0;
    int caps_count = 0;
    int not_caps_count = 0;
    string caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string not_caps = "abcdefghijklmnopqrstuvwxyz";
    string vowels = "AEIOUYaeiouy";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    string symbols = "-=[];'./,!@#$%^&*()+{}|:<>?\"";
    
    for (int i = 0; i < len; i++)
    {
        if (line[i] == ' ')
        {
            space_count += 1;
        }
        for (int w = 0; w < vowels.length(); w++)
        {
            if (line[i] == vowels[w])
            {
                vowels_count += 1;
            }
        }

        for (int c = 0; c < consonants.length(); c++)
        {
            if (line[i] == consonants[c])
            {
                consonants_count += 1;
            }
        }
        for (int s = 0; s < symbols.length(); s++)
        {
            if (line[i] == symbols[s])
            {
                symbols_count += 1;
            }
        }
        for (int k = 0; k < caps.length(); k++)
        {
            if (line[i] == caps[k])
            {
                caps_count += 1;
            }
        }
        for (int n = 0; n < not_caps.length(); n++)
        {
            if (line[i] == not_caps[n])
            {
                not_caps_count += 1;
            }
        }
    }
    cout << "Spaces: " << space_count << endl;
    cout << "Vowels: " << vowels_count << endl;
    cout << "Consonants: " << consonants_count << endl;
    cout << "Symbols: " << symbols_count << endl;
    cout << "Caps: " << caps_count << endl;
    cout << "Not caps: " << not_caps_count << endl;
}

void reverse_string(string &line, int len){
    string reverse_line;
    int i = 0;
    for(int i = len - 1; i >= 0; i--){
        reverse_line += line[i];
    }
    cout << endl << "Reverse string: " << reverse_line << endl;
}

void reverse_words(string &line, int len){
    string reverse_words;
    for(int i = len - 1; i >= 0; i--){
        if(){

        }
    }
}
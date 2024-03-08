#include <iostream>
#include <vector>
#include <string>
using namespace std;

void input(string &line);
void length(int len);
void CheckThings(string &line, int len);

int main()
{
    cout << "Welcome to Simple string array!" << endl;
    string line;

    input(line);
    int len = line.length();
    length(len);
    CheckThings(line, len);
    return 0;
}

void input(string &line)
{
    cout << endl
         << "Enter message: ";
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
    string vowels = "AEIOUYaeiouy";
    string consonants = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";

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
    }
    cout << "Spaces: " << space_count << endl;
    cout << "Vowels: " << vowels_count << endl;
    cout << "Consonants: " << consonants_count << endl;
}

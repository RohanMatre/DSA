// Digital & Spaces
#include <iostream>
using namespace std;
// Give a Sentence,count the Number of alphabets,Digits & Spaces in the Sentence.
// Hello 51 world

int main()
{
    // Store and then cout
    // Read one by one and then cout
    char ch;
    ch = cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;
    while (ch != '\n')
    {
        if (ch > '0' and ch <= '9')
        {
            digit++;
        }
        else if (ch > 'a' and ch <= 'z' or ch > 'A' and ch <= 'Z')
        {
            alpha++;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space++;
        }
        ch = cin.get();
    }
    cout << "Total Alphabet's :" << alpha << endl;
    cout << "Total Spaces :" << space << endl;
    cout << "Total No. :" << digit << endl;
    return 0;
}
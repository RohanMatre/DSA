#include <iostream>
using namespace std;

string encrypt(string s, int n)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = ((s[i] - 'a' + n) % 26) + 'a';
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = ((s[i] - 'A' + n) % 26) + 'A';
            }
        }
    }
    return s;
}

string decrypt(string s, int n)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = ((s[i] - 'a' - n + 26) % 26) + 'a';
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = ((s[i] - 'A' - n + 26) % 26) + 'A';
            }
        }
    }
    return s;
}

void bruteForce(string encrypted)
{
    cout << "Brute Force Decryption:\n";
    for (int i = 0; i < 26; i++)
    {
        string decrypted = decrypt(encrypted, i);
        cout << i << ": " << decrypted << endl;
    }
}

int main()
{
    string s;
    int n;

    cout << "Enter the Plain text: ";
    getline(cin, s);

    cout << "Enter the num(0-25): ";
    cin >> n;

    cout << endl;

    string encrypted = encrypt(s, n);
    cout << "Cipher(Encryption) text: \n";
    cout << encrypted << endl;

    cout << endl;

    string decrypted = decrypt(encrypted, n);
    cout << "Decryption text: \n";
    cout << decrypted << endl;

    cout << endl;

    bruteForce(encrypted);

    return 0;
}

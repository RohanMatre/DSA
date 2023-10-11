#include <iostream>
#include <map>
using namespace std;

// declare the map named Keymap
map<int, int> keyMap;

// function to set Index of Key
void setPermutationOrder(string key)
{
    // transverse the entire key length
    for (int i = 0; i < key.length(); i++)
    {
        keyMap[key[i]] = i;
    }
}

// encrpytion
string encryptMessage(string msg, string key)
{
    int row, col, k = 0;
    string cipher = "";

    col = key.length();                   // Calculate the no. of cols
    row = (msg.length() + col - 1) / col; // Calculate the no. of rows

    char matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (k < msg.length())
            {
                if (isalpha(msg[k]) || msg[k] == ' ')
                {
                    matrix[i][j] = msg[k];
                }
                else
                {
                    matrix[i][j] = '_'; // used for in between Padding character
                }
                k++;
            }
            else
            {
                matrix[i][j] = '_'; // used for last Padding character
            }
        }
    }

    // print the matrix
    cout << "\nMatrix during Encryption:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // iterate over the keymap
    for (auto i = keyMap.begin(); i != keyMap.end(); ++i)
    {
        int columnIndex = i->second; // retrieve value with current key HACK -> 0123
        for (int rowIndex = 0; rowIndex < row; rowIndex++)
        {
            if (isalpha(matrix[rowIndex][columnIndex]) || matrix[rowIndex][columnIndex] == ' ' || matrix[rowIndex][columnIndex] == '_')
            {
                cipher += matrix[rowIndex][columnIndex];
            }
        }
    }

    // return cipher text
    return cipher;
}

string decryptMessage(string cipher, string key)
{
    int col = key.length();
    int row = (cipher.length() + col - 1) / col; // Calculate the no. of rows
    char cipherMat[row][col];

    // So creating a mapping of key char to col indicies
    map<char, int> keyMap;
    for (int i = 0; i < col; i++)
    {
        keyMap[key[i]] = i;
    }

    // analysis the cipher
    int k = 0;
    for (int l = 0; key[l] != '\0'; l++)
    {   
        // map the key
        int j = keyMap[key[l]];
        for (int i = 0; i < row; i++)
        {
            if (k < cipher.length())
                cipherMat[i][j] = cipher[k];
            k++;
        }
    }

    string msg = "";
    k = 0;
    // make the update the msg of plain text
    for (int j = 0; j < col; j++)
    {
        for (int i = 0; i < row; i++)
        {
            if (k < cipher.length() && (isalpha(cipherMat[i][j]) || cipherMat[i][j] == ' ' || cipherMat[i][j] == '_'))
                msg += cipherMat[i][j];
            k++;
        }
    }
    return msg;
}

int main(void)
{
    string msg;
    string key;
    int choice;

    while (true)
    {
        cout << "1. Encryption\n2. Decryption\n3. Exit\nChoose (1, 2, 3): ";
        cin >> choice;

        cin.ignore();
        if (choice == 1)
        {
            cout << "Enter Plain Text: ";
            getline(cin, msg);
            cout << "Enter Key: ";
            getline(cin, key);
            setPermutationOrder(key);
            string cipher = encryptMessage(msg, key);
            cout << "Encrypted Message: " << cipher << endl;
        }
        else if (choice == 2)
        {
            cout << "Enter Cipher Text: ";
            getline(cin, msg);
            cout << "Enter Key: ";
            getline(cin, key);
            setPermutationOrder(key);
            string plain = decryptMessage(msg, key);
            cout << "Decrypted Message: " << plain << endl;
        }
        else if (choice == 3)
        {
            cout << "Exiting the program." << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}

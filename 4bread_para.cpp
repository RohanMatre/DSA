#include <iostream>
using namespace std;

int main()
{
    char paragraph[1000];

    cin.getline(paragraph, 1000, '\n'); // \n By Default Value Or Use '#'/'.'.

    cout << paragraph << endl;

    return 0;
}
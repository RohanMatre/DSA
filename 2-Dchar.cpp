// 2-D Character Arrays

#include <iostream>
using namespace std;

int main()
{
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred",
    };

    for (int i = 0; i < 6; i++)
    {
        cout << numbers[i] << endl; // numbers[i] is the Address of that thing
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char sentence[1000];

    char temp = cin.get();

    int len = 0;

    while (temp != '\n')
    { // # is also used
        sentence[len++] = temp;
        // len++;
        // cout<<temp;
        // Update the Value of temp :
        temp = cin.get(); // Good Thing about get Function It Also Read \n.
    }
    sentence[len] = '\n';
    cout << endl;
    cout << "Lenght :" << len << endl;
    cout << sentence;
    return 0;
}
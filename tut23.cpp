//-----Episode #23:- C++ Objects Memory Allocation & using Arrays in Classes---

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void DisplayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the Id of Your item no. : " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of Your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.DisplayPrice();
    return 0;
}
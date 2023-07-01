// Pointer Basics- Address of Operation's-Dereference operator-Reference Variable - Pass By Reference(Reference Variables)- Pass By Reference(Pointers)

#include <iostream>
using namespace std;

/*// Pass By Reference Using Reference Variables
void applyTax(int &money){
    float tax = 0.10;
    money =money - money*tax;
}*/

// Pass By Reference - Pointers
void watchVideo(int *viewsPtr)
{
    // watch video should increment view count by 1
    *viewsPtr = *viewsPtr + 1;
}

int main()
{
    /* int x = 10;
     // float y = 5.34;
     //  cout<<&x<<endl;
     //  cout<<&y<<endl;

     // Demo Pointer
     int *xptr = &x;

     cout << xptr << endl;
     // Address of a Pointer Variable
     cout << &xptr << endl;

     // Pointer to a Pointer Variable
     int **xxptr = &xptr;
     cout << xxptr << endl;

     // Dereference Operator
     cout << *xptr << endl;

     // Reference Variable :
     int &y = x;

     y++;
     // x++;
     cout << x << endl;
     cout << y << endl;

    // Pass By Reference - Reference Variable
    int income;
    cin>>income;

    applyTax(income);

    cout<< income <<endl; */

    // Pass By Reference - Pointers
    int views = 100;
    watchVideo(&views);

    cout << views << endl;
    return 0;
}
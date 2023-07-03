//----------Episode-17:- Inline Fuctions, Default Arguments & Constant Arguments-------------
#include<iostream>
using namespace std;
//1. Inline Functions:- // It is Request to Compiler.
inline int product(int a,int b){
    return a*b;
}

// ------------------------------Extra Topic :- Static Functions---------------------------- 
//     int product(int a,int b){
//     static int c=0;// static means It intialize 1 time only(This executes only once). 
//     c=c+1;//Next time This Function is Run,the Value of c will be Retained.
//     return a*b+c;
// }
//---------------------------------------------------------------------------------------------

//2. Default Argumemts :- // Here,1.04 is Default Rate for Customer,but some VIP have More Interest so, this method is used. It give Value By default if have not given any value.
float moneyReceived(int currentMoney,float factor=1.04){    // Write Regular Function first,then do Default Value.
   return currentMoney*factor; 
}

//3. Constant Arugmemts:- Those arguments in which it Acciedentlly cannot change the function kar bethe
// int strlen(const char 'p'){  // Used up in Reference Var. & Pointer :- 

// }
int main(){
//    1.) Why Inline fuctions? :-Single Line Mein Expansed compiler Replace it Because It Save The time .
//    If We made Big Function Inline,then Difficulties Lies in Memory and Atlast it Crashed.  
//    When We can't Use Inline Functions,when Recursion,Static variables,Loop Function,Switch(it is really gone a Confusion) is Their.
    // int a,b;
    // cout<<"Enter the Value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    // cout<<"The Product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If You Have "<<money<< " Rs. in your Bank Account, You Will Receive "<<moneyReceived(money)<< " Rs. After 1 Year. "<<endl;
    cout<<"For VIP,If You Have "<<money<< " Rs. in your Bank Account, You Will Receive "<<moneyReceived(money,1.1)<< " Rs. After 1 Year. "<<endl;
    return 0;
}









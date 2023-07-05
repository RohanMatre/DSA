//------------Episode:-33 : Dynamic Initialization of Objects Using Constructors----------------
#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
    BankDeposit(){}          // 1 Blank Constructor and 2 Arguments Constructor Made. (IMP)
    BankDeposit(int p,int y,float r); //r can be value like 0.04.
    BankDeposit(int p,int y,int r); //r can be value like 14.
    void show();

};
BankDeposit::BankDeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue = returnValue * (1+interestRate);
    }
}
BankDeposit::BankDeposit(int p,int y,int r)   // Shortcut Key :- Ctrl+ D
{
    principal=p;
    years=y;
    interestRate=float (r)/100;
    returnValue=principal;

    for(int i=0;i<y;i++){
        returnValue = returnValue * (1+interestRate);
    }
}
void BankDeposit::show(){
    cout<<endl<<"Principal Ammount was "<<principal
    <<". Return Value afters "<<years
    <<" years is "<<returnValue<<"."<<endl;
}

int main(){
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    bd3.show();
    cout<<"Enter the Value of p,y and r is "<<endl; 
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();
    cout<<"Enter the Value of p,y and R is "<<endl; // R is Integer.
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();
    return 0;
}











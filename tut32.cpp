//--------------Episode:-32 : Constructors With Default Arguments In C++ --------------------
#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a,int b=4,int c=2){
            data1=a;
            data2=b;
            data3=c;
        }
        void printData(); 
};
void Simple::printData(){
    cout<<"The Value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<"."<<endl;
}

int main(){
    Simple s(12,13);
    s.printData();
    return 0;
}
// H.w.:- Do Made So Constructors Of Real and Img By Default Values.













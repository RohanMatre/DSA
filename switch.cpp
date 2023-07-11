#include<iostream>
using namespace std;

int main(){
    char ch='1';
    int num=1; 
    cout<<endl;
    switch(ch){
        case 'a': cout<<"First" <<endl;
                cout<<"First again" <<endl;
        break;  // It use to Jump out of the Block  

        //case '1': cout<<"Character one" <<endl;
        //break;
        case '1': switch(num){
            case 1: cout<<"Value of Num is : "<<num<<endl;
            break;
        }
        break;

        default: cout<<"It is default Case"<<endl;
    }
    return 0;
}
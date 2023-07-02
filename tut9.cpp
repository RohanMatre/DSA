
//************Episode-09:-C++ Control Structures, If Else and Switch-Case Statement:-**********

#include<iostream>
using namespace std;

int main(){
    int age;
    // cout<<"This is Tutorial 9.";
    cout<<"tell me your age : "<<endl;
    cin>>age;
    
    //*****************Selection Control Structures*************************            
    // Case:- (1)---> if-else ladder Statements-----------------------------
    // if((age<18) && (age>0)){
    //     cout<<"You can not come to my Party "<<endl;
    // }
    // else if(age==18){
    //  cout<<"You are a kid and you will get Kid pass to the Party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"You are not Born Yet"<<endl;
    // }
    // else
    // cout<<"you can come to the party"<<endl;
    
    //***************case-2 :---> switch-case Statements*************************
    switch (age){
        case 18:
        cout<<"you are 18 & let me think"<<endl;
        break;
        
        case 22:
        cout<<"you are 22 & you are allow"<<endl;
        break;
        
        case 12:
        cout<<"you are 12 & you are not allow"<<endl;
        break;
        
        case -2:
        cout<<"you are -2"<<endl;
        break;
        
        default:
        cout<<"No special Cases"<<endl;
        break;
    }
    return 0;   
}

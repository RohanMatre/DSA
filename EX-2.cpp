// If-Else Conditions
#include <iostream>
using namespace std;

int main()
{
    /*int a;
    cin>>a;
    //cout<<"Value of n is : "<<n<<endl;
    // if a is positive
    if(a>=0){
        cout<<a<<" is Positive"<<endl;
    }else{
       cout<<a<<" is Negative "<<endl;
    }

    int a, b;
    // a = cin.get();
    // a= '4' --> 52 (ASCII)
    // cout<<"Value of a and b is : "<<a<<" and "<<b<<endl;
    cout << "Enter Value of a is : " << a << endl;
    cin >> a;
    if (a > 0)
    {
        cout << a << " is Positive." << endl;
    }
    else if(a < 0){
        cout<<a<<" is Negative."<<endl;
    }
    else{
        cout<<"It is Zero."<<endl;
    }*/

    // H.w.
 // 1.)
 /*
    int a = 9;
    if(a == 9){
        cout<< "NINEY"<<endl;  
    }
    if(a>0){
        cout<< "POSITIVE"<<endl;
    }
    else{
        cout<< "NEGATIVE"<<endl;
    }
*/
/*2.
    int a=2;
    int b=a+1;

    if((a=3)==b){
        cout<<a<<endl;
    }
    else{
        cout<<a+1<<endl;  
    }
*/
/*3.
    int a = 24;
    if(a>20){
        cout<<"Love"<<endl;
    }
    else if(a == 24){
        cout<<"Lovely"<<endl;
    }
    else{
        cout<<"Babbar"<<endl;
    }
    cout<<a<<endl;
*/
{
    char ch;//Variable declaration
    cout<<"Enter a character: ";
     cin>>ch;//store the entered character
     if(ch>='A' && ch<='Z'){//check upper case
    cout<<ch<<" is an upper case lextter. "<<endl;
}
else if(ch>='A' && ch<='z'){//check lower case
    cout<<ch<<" is a lower case letter. "<<endl;
}
else{
    cout<<ch<<" It is Numeric value. "<<endl;
}
}
   return 0;
}
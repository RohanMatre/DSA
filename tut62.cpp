// ---------- Episode :- 62 : File I/O in C++: open() and eof() functions ------------------

#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;


int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me"<<endl;
    out<<"This is me also"<<endl;
    out<<"This is alsi me";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    //in>>st>>st2;
    //cout<<st<<st2<<endl;

    while(in.eof() ==0){               //eof - End of File
            getline(in,st);
            cout<<st<<endl;
    }
    in.close();
    return 0;
}
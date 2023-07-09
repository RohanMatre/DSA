//-------------------- Episode:- 60 : File I/O in C++ --------

#include<iostream>
#include<fstream>
/*
The Useful classes for working with files in C++ are :
1. fstreambase 
2. ifstream -------> derived from fstreambase
3. ofstream -------> derived from fstreambase 



In order work with files in C++,you will have to open it.Primarly,There are 2 ways to open a file:  
1. Using the Constructor.
2. Using the member funtion open of the class.
*/
using namespace std;

int main(){
    string st ="Rohan Bhai";
    string st2;
    // Opening the files using Constructor and writing it.
    //ofstream out("sample60.txt");// ofstream is a class Which is obtained from library(write a operation)
    //out<<st;

    // Opening files using constructor and reading it
    ifstream in("sample60b.txt"); // Read operation
   // in>>st2;
    getline(in, st2);  
    cout<<st2;
    return 0;
}











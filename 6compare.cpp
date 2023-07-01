// String Copy,Compare,Concat!
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[1000] = "apple";
    char b[1000];
    // Calculate the Length - strlen
    cout<<strlen(a)<<endl;// Count the No. Of Alphabet 
    //strcpy
    strcpy(b,a);// 1 - Destination & 2 - Source 
    cout<<b<<endl;
    //strcpm -Compare the Two String 
    //cout<<strcpm(a,b)<<endl;
    //strcat- Two String to be Concatinated(Merge)
    char web[] ="www";
    char domain =".codingminute.com";
    cout<<strcat(web,domain)<<endl;
    return 0;
}
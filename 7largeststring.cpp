// Largest String 

#include<iostream>
using namespace std;

// Problem : Read N String and Print the Largest string.Each String can Have Upto 1000 Character.
int main(){
    int n;
    cin>>n;
    cin.get();

    char sentence[1000];
    char largest[1000];

    int largest_len = 0;

    while(n--){
        cin.getline(sentence,1000);
        //cout<<sentence<<endl;
        int len= strlen(sentence);
        if(len>largest_len ){
            largest_len = len;
            strcpy(largest,sentence);
        }
    }

    cout<<"Largest sentence is :"<<largest<<endl;
    return 0;
}


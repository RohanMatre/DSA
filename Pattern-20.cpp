#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        // Print Karo Space(1st triangle)
        int space = n-row;
        while(space){
            cout<<" ";
            space--;
        }
        // Print 2st triangle
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        // Print 3nd triangle
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
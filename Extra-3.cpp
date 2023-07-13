#include<iostream>
using namespace std;

void display_output(int sum,int n,int m){
    int count=0;
    int c[n+m],ld=0,reverse=0;
    while(sum>0){
        ld = sum % 10;
        sum = sum/10;
        // reverse = reverse * 10 + ld;
        c[count++] = ld;
    }
    for(int i=0;i<count;i++){
        cout << c[i] << " ";
    }
}

int creating_number_from_array(int a[],int b[],int n,int m){
    int num1=0,num2=0,sum=0;
    for(int i=0;i<n;i++){
        num1 = a[i]*(10^i) + num1;
    }
    for(int i=0;i<m;i++){
        num2 = b[i]*(10^i) + num2;
    }
    sum = num1 + num2;
    return sum;
}

void input_array(int a[],int b[],int n,int m){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    input_array(a,b,n,m);
    
    display_output(creating_number_from_array(a,b,n,m),n,m);
    return 0;
}
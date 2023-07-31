// Maths By Striver
#include <iostream>
#include <math.h>
using namespace std;

int countDigits(int n){
	// Write your code here.	
	int sum = (int)(log10(n) + 1);
    cout<<sum<<endl;
	return n;
}
int main()
{
    int n;
    cin >> n;

    countDigits(n);
    return 0;
}
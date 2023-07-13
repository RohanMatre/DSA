// Max. element in Array & it's location
#include <iostream>
using namespace std;


int main()
{    
    int n,array[100], maximum, k, location = 1;
    
    cout<<"Enter the number of elements in array:- "<<endl;
    cin>>n;
    maximum = array[0];
    cout<<"Enter "<<n<<" integers:- "<<endl;
    for (k = 0; k < n; k++){
       cin>>array[k];
    }
    for (k = 0; k < n; k++)
    {
        if (array[k] > maximum)
        {
                maximum  = array[k];
                location = k+1;
        }
    }
    
    cout<<"Maximum element is present at location "<<location<<" and it's value is "<<maximum<<endl;
    return 0;    
}
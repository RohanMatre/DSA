//-----------------------------Episode - 11 : Break and Continue------------------------
#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<i<<endl;
    //     if(i== 2)
    //     {
    //         break;// Break Meaning break the loop at given condition leave the Loop.
    //     }
    // }
    
    for (int i = 0; i < 4; i++)
    {
        if(i==2)
        {
            continue;//continue Run one time At given Condition Skip that Part again Run the Loop. 
        }
        cout<<i<<endl; 
    }
    return 0;
}
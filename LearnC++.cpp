#include<iostream> // bits.stdc++.h we can use include all C++ libraries
using namespace std;

void print(int n){

    // 1. Pattern
    //  for(int i=0;i<=n;i++){
	//     for(int j=0;j<n;j++){
	//         cout<<"*";
	//     }
	//     cout<<endl;
	// }

    // 2. Pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*"<<" ";
    //     }
    // cout<<endl;
    // }

    // 3. Pattern
    // for(int i=1;i<=n;i++){
    //         for(int j=1;j<=i;j++){
    //             cout<<j<<" ";
    //         }
    //     cout<<endl;
    // }

    // 4. Pattern
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

    // 5. Pattern
    // for(int i=0;i<n;i++){
	//     for(int j=0;j<=n-i-1;j++){
	//         cout<<"*"<<" ";
	//     }
	// cout<<endl;
	// }

    // 6. Pattern
    // for(int i=0;i<n;i++){
	//     for(int j=1;j<=n-i;j++){
	//         cout<<j<<" ";
	//     }
	// cout<<endl;
	// }

    // 7. Pattern (V.V.V. Imp)
    // for(int i=0;i<n;i++){
    //     // Space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }   

    //     // Star
    //     for(int j=0;j<2*i+1;j++){
    //         cout<<"*";
    //     }   

    //     // Space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }   
    //     cout<<endl;
    // }

    // 8. Pattern
    // for(int i=0;i<n;i++){
        
    //     // space
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }

    //     //star
    //     for(int j=0;j<(2*n-2*i-1);j++){
    //         cout<<"*";
    //     }

    //     // space
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // } 


    // 9. Pattern - combine 7. & 8. Pattern
   
   // 10. Pattern
//    for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// sir method 
    // for(int i=1;i<=2*n-1;i++){
    //     int stars = i;
    //     if(i>n) stars = 2*n-i;
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl; 
    // }

    // 11. Pattern
    // int start=1;
    // for(int i=0;i<n;i++){
    //     if(i%2==0) start=1;
    //     else start=0;
    //     for(int j=0;j<=i;j++){
    //         cout<<start;
    //         start=1-start;
    //     }
    //     cout<<endl;
    // }

    // 12. Pattern

    // for(int i=1;i<=n;i++){
        
    //     // numbers
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }

    //     // space
    //     for(int j=1;j<=2*n-2*i;j++){
    //         cout<<" ";
    //     }

    //     // numbers
    //     for(int j=i;j>=1;j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }        

    // 13. Pattern
    // int num=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    // 14. Pattern
    // for(int i=1;i<=n;i++){
    //     for(char s='A';s<'A'+i;s++){
    //         cout<<s<<" ";
    //     }
    //     cout<<endl;
    // } 

    // 15. Pattern
    // for(int i=0;i<n;i++){
    //     for (char s = 'A'; s <= 'A' + (n-i-1); s++)
    //     {
    //         cout<<s<<" ";
    //     }
    //     cout<<endl;
    // }


    // 16. Pattern
    // char s='A';
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<s;
    //     }
    //     s++;
    //     cout<<endl;
    // }

    // 17. Pattern
    // for(int i=0;i<n;i++){
    //     // Space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }   

    //     // characters
    //     char s = 'A';
    //     int breakpoint = (2*i+1)/2;
    //     for(int j=1;j<=2*i+1;j++){
    //         cout<<s;
    //         if(j<=breakpoint)
    //         {
    //             s++;
    //         }else{
    //             s--;
    //         }
    //     }

    //     // Space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }   
    //     cout<<endl;
    // }

    // 18. Pattern
    // for(int i=0;i<n;i++){
    //     for(char s='E' - i;s<='E';s++){
    //         cout<<s<<" ";
    //     } 
    //     cout<<endl;
    // }
    // Alternative Problem
    // char ch='A';
    //     for(int i=1;i<=n;i++)
    //     {
    //           ch='A'+n-1;   
    //         for(int j=1;j<=i;j++)
    //         {
    //             cout<<ch<<" ";
    //             ch--;
    //         }
    //         cout<<endl;
    //     }


    // 19. Pattern
    // int iniS = 0;
    // for(int i=0;i<n;i++){

    //     // Star 
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"*";
    //     }

    //     // Space 
    //     for(int j=0;j<iniS;j++){
    //         cout<<" ";
    //     }

    //     // Star
    //     for(int j=1;j<=n-i;j++){
    //         cout<<"*";
    //     }
    //     iniS+=2;
    //     cout<<endl;
    // }

    // iniS=2*n-2;
    // for(int i=1;i<=n;i++){
    //     // Star 
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }

    //     // Space 
    //     for(int j=0;j<iniS;j++){
    //         cout<<" ";
    //     }

    //     // Star
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     iniS-=2;
    //     cout<<endl;
    // }

    // 20. Pattern
    // int spaces=2*n-2;
    //  for(int i=1;i<=2*n-1;i++){

    //     int stars = i;
    //     if(i>n) stars = 2*n-i;

    //     // Stars
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }

    //     // spaces
    //     for(int j = 1;j<=spaces;j++){
    //         cout<< " ";
    //     }

    //     // Stars
    //     for(int j=1;j<=stars;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //     if(i<n) spaces-=2;
    //     else spaces+=2;
    //  }

    // 21. Pattern
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i == 0 || j == 0 || i == n-1 || j == n-1){
    //                 cout<<"*";
    //         }
    //         else cout<<" ";
    //     }
    //         cout<<endl;
    // }

    // 22. Pattern
    // for(int i = 0;i<2*n-1;i++){
    //     for(int j=0;j<2*n-1;j++){
    //         int top=i;
    //         int left=j;
    //         int right=(2*n-2)-j;
    //         int down=(2*n-2)-i;
    //         cout<<(n-min(min(top,down),min(left,right)));
    //     }
    //     cout<<endl;
    // }
    
}

int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
}



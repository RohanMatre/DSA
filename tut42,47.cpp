//------------------ Episode:- 42 : Exercise on C++ Inheritance ------------------
#include<iostream>
#include<cmath>
using namespace std;

/* Create 2 Classes:
1. SimpleCalculator - Take Input of 2 No. using utility function & Performs +,-,*,/ and displays the results using another function.
2. scientificCaluclator -  Take Input of 2 No. using utility function & Performs any four scientific Operations of your choice and displays the results using another function.
 
 Create Another Class HybridCalculator and inherit it using these 2 classes:
 Q1. What Type of inheritance are you using? --->  Multiple Inheritance
 Q2. Which mode of inheritance are you using? ---> public SimpleCalculator,public ScientificCalculator
 Q3. Create an object of HybridCalculator and Display results of simple and Scientific Caluclator.
 Q4. How is code Reusability implemented?
*/
class SimpleCalculator{
    int a,b;
     public:
     void getDataSimple(){
         cout<<"Enter the Value of a :"<<endl;
         cin>>a; 
         cout<<"Enter the Value of b :"<<endl;
         cin>>b;
     }
        void performOperationsSimple(){
            cout<<"The Value of a + b is : "<<a+b<<endl;
            cout<<"The Value of a - b is : "<<a-b<<endl;
            cout<<"The Value of a * b is : "<<a*b<<endl;
            cout<<"The Value of a / b is : "<<a/b<<endl;
        }
}; 

class ScientificCalculator{
    int a,b;
     public:
     void getDataScientific (){
         cout<<"Enter the Value of a :"<<endl;
         cin>>a; 
         cout<<"Enter the Value of b :"<<endl;
         cin>>b;
     }
        void performOperationsScientific(){
            cout<<"The Value of cos(a) is : "<<cos(a)<<endl;
            cout<<"The Value of sin(a) is : "<<sin(a)<<endl;
            cout<<"The Value of exp(a)  is : "<<exp(a)<<endl;
            cout<<"The Value of tan(a) is : "<<tan(a)<<endl;
        }
};

class HybridCalclutor : public SimpleCalculator,public ScientificCalculator{


};

int main(){
    //SimpleCalculator calc;
    //ScientificCalculator calc;
    //calc.getData();
    //calc.performOperations();
    HybridCalclutor calc;
    //calc.getDataScientific();
    //calc.performOperationsScientific();
    calc.getDataSimple();
    calc.performOperationsSimple();
    return 0;
}











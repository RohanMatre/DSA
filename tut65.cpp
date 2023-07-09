// ------- Episode :- 65 : C++ Templates: Templates with Multiple Parameters -------------

#include<iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MUTLIPLE TEMPLATES PARAMETERS(ONE,TWO,OR MORE THAN TWO)
template<class T1,class T2,....(COMMA SEPARATED)>
class nameofclass{
    //body
}
*/
template<class T1,class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1= a ;
        data2= b ;
    }
    void display(){
    cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main(){
    myclass <int,char>obj(1,'c'); // Easily Change Data Types 
    obj.display();
    return 0;
}


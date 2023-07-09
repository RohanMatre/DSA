// -------- Episode :- 68 : Member Function Templates & Overloading Template Functions in C++ ----------

#include<iostream>
using namespace std;

template<class T>
class Rohan{
    public:
    T data;
    Rohan(T a){
        data = a;
    }
    void display();
};
template <class T>
void Rohan<T> :: display(){
        cout<<data;
    }
void func(int a){
    cout<<"I am First func()"<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

template <class T>
void func1(T b){
    cout<<"I am templatised func()"<<b<<endl;
}

int main(){
    //Rohan <float>r(5.4);
    //Rohan <char>r('d');
   // Rohan<int> r(4);
    //cout<<r.data<<endl; 
    //r.display();
    //cout<<endl;

    //func(4);  // Exact match TAKE First(Highest) Priority
    func1(4);  
    return 0;
}
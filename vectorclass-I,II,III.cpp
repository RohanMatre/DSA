// Vector Class-I

#include <iostream>
using namespace std;

class Vector
{
    // Data Members
    int *arr;
    int cs;
    int ms;
    // Constructor,Destructor, Methods
public:
    Vector(int max_size=1)
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }
    void push_back(const int d)
    {
        // Two Cases
        if (cs == ms)
        {
            // create a new and delete the old one,double the capacity
            int *oldArr = arr;
            ms = 2 * ms;
            arr = new int[ms];
            // Copy the elements
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            //delete the old array
        delete [] oldArr;
        }
        arr[cs] = d; // d for data
        cs++;
    }
    void pop_back(){
        if(cs>=0){
        cs--;
        }
    }
    bool isEmpty(){
        return cs==0;
    }

    // front,Back,At(i),[]
    int front()const{
        return arr[0];
    }

    int back()const{
        return arr[cs-1];
    }

    int at(int i)const{
        return arr[i];
    }

    int size()const{
        return cs;
    }

    int capacity()const{
        return ms;
    }

    int operator[](const int i)const{
        return arr[i];
    }
};

int main()
{
    //Vector v(5);
    Vector v;
    v.push_back(1);    
    v.push_back(2);    
    v.push_back(3);    
    v.push_back(4);    
    v.push_back(5);
    v.push_back(6);
    v.pop_back();
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    cout<<v.at(3)<<endl;
    cout<<v.size()<<endl;//5    
    cout<<v.capacity()<<endl;//8  

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}
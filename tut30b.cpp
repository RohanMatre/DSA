#include<iostream>
using namespace std;

class Point{
    public:
    int x,y;
    Point(int a,int b){
    x = a;
    y = b; 
    }
    
    void displayPoint(){ 
    cout<<"The Point is ("<<x<<", "<<y<<")"<<endl;
    }
};
//H.w.:-  Create a Functions(Hint: Make it a Friend Function) which takes 2 Points and Computes the Distance between Those 2 Points.
// Use these examples to check your :- Distance Between (1,1) & (1,1) is 0.
int main(){
    Point p(1, 1) ;
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
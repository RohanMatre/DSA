#include<iostream>
using namespace std;

// void print(){
//     cout<<"rohan"<<endl;
// }

// int sum(int a,int b){
//     return a+b; 
// }


/* STL Divided into 4 Parts: 
1. Algorithm (Done at last )
2. Containers (Done)
3. Functions (Not Required)
4. Iterators (Done)


1. Utility library - pair


var - It is used to store only 1 value in 1 variable. e.g int a=1;
pair - It is used to store more than 1 values in 1 varible called p. 
e.g. 
1)
void explainPair(){
pair<int, int> p = {1,2}
cout<<p.first<<" "<<p.second<<endl;
// output- 1 2

// 2) Here we store 3 values in single variable
pair<int ,pair<int ,int>> p = {1,{3,4}}
cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
// output- 1 3 4

// 3) here we can store arrays also
pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
cout<<arr[1].second<<endl;
// output- 5
}

2. Containers

Disadvantage of array - fixed Size
(a) vectors - [Allocation of elements Dynammically--> Dynamic Size]
void explainPair() {

1. Create vector - 

vector<int> v; --> create empty container {}

v.push_back(1); --> {1}

v.emplace_back(2); --> {1,2} fast --> emplace > push
emplace_back is similar to push_back,but dynamically increase the size of vector. 

2. Using pair in vector - 

vector<pair<int, int>> v; 

v.push_back({1,2}); --> remember vector needs {} for push_back
v.emplace_back(1,2); --> don't need {}

3. Usage of vector -

vector<int> v(5,100); --> {100,100,100,100,100} {no. of elements in vector,acutal no.}

vector<int> v(5); --> declaring the size of the vector

vector<int> v1(5,20); --> {20,20,20,20,20} {no. of elements in vector,acutal no.}
vector<int> v2(v1); --> v2 will contain elements of v1 but copied. 


4. How to access element in vector 

cout<<v[0]<<" "<<v.at(0); --> we don't generally used this v.at(0)


5. Topic Iterator in Vector - 

e.g.-1 : vector : {20,10,15,6,7}

Syntax of vector Iterator-

vector<int>::iterator it = v.begin();  --> v.begin() point's to Memory address at which value of 20 is stored. 
--> vector<datatype>syntax var = method;

it++;
Accessing the value of 10 which is stored at that it address
cout<<*(it)<<" "; --> *(it) //dereference operator --> access value at that address

output - 10 --> as it++ is used it shift to index-1.

it = it+2;
cout<<*(it)<<" "; --> shift ti value 6 at index-3.

e.g.-2 : vector : {10,20,30,40}

a) vector<int>::iterator it = v.end();

vector : {10,20,30,40}
                       ^(it pointer point's to this when we use .end())
we need to do it-- to get 40 value.



b) vector<int>::iterator it = v.rend(); //Not Generally Used Remember for Knowlegde

v.rend(); --> means rend(reverse end)
vector : {10,20,30,40}
        ^(it pointer point's to this when we use .rend())
we need to do it++ to get 10 value.

c) vector<int>::iterator it = v.rbegin(); // Not Generally Used Remember for Knowlegde

v.rbegin(); --> means rend(reverse begin)
vector : {10,20,30,40} (but will move to <- side when we apply it++)   
                    ^(it pointer point's to this when we use .rend())
we need to do it++ to get 30 value.

d) back()
cout<<v.back()<<" ";
 vector : {10,20,30}
                  ^(it pointer point's to this when we use .back())


e.g.-3 For Loop for iteration in vector:  (Print the elements of vector using for loop)

a) Normal form of for loop

for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}

b) auto form of for loop --> auto means automatically detects the datatype
auto means = vector<datatype>::iterator 

for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
}

c) For each loop :

for(auto it : v){
    cout<<*(it)<<" ";
}
 meaning {10,20,30} --> it pointer will automatically move to 10,20,30 & atlast it will stop after 30.


6. Deletion in vector -

a) Delete Single Element in Vector - 

v.erase(v.begin()+1); // Syntax
e.g. {10,20,12,23}  --> {10,12,23}
         ^ (erase this address so element will be removed & vector will be reshuffled)

b) Delete Multiple Elements in Vector - 

v.erase(v.begin()+2,v.begin()+4); // Syntax --> v.erase(start,end); --> [start, end)
e.g. {10,20,12,23,35}
index- 0  1  2  3  4 
It will delete element at index - {2,3}.
output - {10,20,35}

7. Insertion in vector -  (Disadvantage - Insert in vector is Costlier)
While vector is internal Opertions as Singly Linked List - 

a) vector<int> v(2,100); //{100,100}

b) v.insert(v.begin(),300); //{300,100,100}

c) v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

d) vector<int> copy(2,50); //{50,50}

v.insert(v.begin(),copy.begin(),copy.end());
{50,50,300,10,10,10}

e) //{10,20}
cout<<v.size(); //2
v.pop_back(); //{10}

v1-->{10,20}
v2-->{30,40}
v1.swap(v2);
output - v1-{30,40}, v2 -{10,20}

f) v.clear(); // erases entire vector

g) cout<<v.empty(); // gives answer in T/F.

}


(b) List - It Gives Forward Opertions as well.

void explainList(){
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    Since list is internal Opertions as Doubly Linked List - So push_front is very Cheap. 
    ls.push_front(5); //{5,2,4};
    ls.emplace_front(3); //{3,5,2,4}

    Rest Funtions same as vector
    begin,end,rbegin,rend,clear,insert,size,swap.
}

(c) Deque - 

void explainDeque() {

    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2} 
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();
    dq.front();
    
    Rest Funtions same as vector
    begin,end,rbegin,rend,clear,insert,size,swap.
}

(d) Stack - LIFO (LAST IN FIRST OUT) (index not allowed)

Alwayas Remember Stack has only 3 element - push,pop,top. --> all operations are O(1) operations.

void explainStack() {

    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}
    
    cout<<st.top(); // prints 5

    st.pop(); // st looks like {3,3,2,1}

    cout<<st.top(); // 3
    cout<<st.size(); // 4

    cout<<st.empty(); 

    stack<int> st1,st2;
    st1.swap(st2); 
}   


(e) Queue - FIFO (FIRST IN FIRST OUT)

all operations are O(1) operations.

void explainQueue {
     queue<int> q;
     q.push(1); // {1}   
     q.push(2); // {1,2}   
     q.push(4); // {1,2,4} 
     q.emplace(6); // {1,2,4,6} 

    q.back() += 5;

    cout<<q.back(); prints 11 as 6+5 = 11
    
    Q is {1,2,4,11}
    cout<<q.front(); // prints 1

    q.pop(); {2,4,11}

    cout<<q.front(); prints 2

    size,swap,empty same as stack 
}


(f) Priority Queue(PQ) - Largest value stays as top --> it is not linear DS, tree is mainted.
It is called as Max heap.
push -> O(log n),top->O(1),pop->O(log n) (main func.) 
void explainPQ() {
    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<<pq.top(); prints 10

    pq.pop(); // {8,5,2}

    cout<<pq.top(); // prints 8

    size,swap,empty functions same as others 


    Minimum Priority Queue(PQ) - Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout<<pq.top(); prints 2

}


(g) Set - Stored everything in the Stored Order & Store Unique 
--> It is not Linear DS, tree is maintained.
--> In Set,all the functions(operations) will take O(log n) time complexity.
void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    Functionality of insert in vector can be used also, that only increases efficiency
    begin(),end(),rbegin(),rend(),size(),empty(),and swap() are same as those of above

    {1, 2, 3, 4, 5}
    auto it = st.find(3); --> return an iterator points to 3.

    {1, 2, 3, 4, 5} ^ points this st.end().
    auto it = st.find(6); --> If the element is not present in the set,then it will return st.end().

    {1, 2, 3, 4}
    st.erase(5); erases 5 takes logarithmic time

    int cnt = st.count(1);  --> if exist then return 1 else 0.

    auto it = st.find(3);
    st.erase(it); it takes constant time


    {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} {first, last}

    lower_bound() and upper_bound() function works in the same way as in vector it does. --> O(log n)
    a.lower_bound() - It Returns the first element which is occur at which posn & it doesn't occur then return after it.end(); element.
    e.g. a[] = {1,4,5,6,9,9}
    int ind = lower_bound(a,a+n,4) - a;  --> 1
    int ind = lower_bound(a,a+n,7) - a;  --> 4
    int ind = lower_bound(a,a+n,10) - a;  --> 6

   b.upper_bound() - It always return the value of next element that been asked to serve.
    e.g. a[] = {1,4,5,6,9,9}
    int ind = lower_bound(a,a+n,4) - a;  --> 4->return 5 
    int ind = lower_bound(a,a+n,7) - a;  --> 7-> return 9
    int ind = lower_bound(a,a+n,10) - a;  --> 10 -> return 9

    this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}


(h) MultiSet - It always obey Sorted only not unique.

void explainMultiSet(){
    Everything is same as set
    Only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    Only a single one erased --> this will delete only 1.
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2); --> this will delete 1,2.

    Rest all functions same as set 

}

(I) Unordered Set - It Stores Unique,but omits Sorted as have Randomize Order.
Most of the operations Have T.C. O(1). all operations similar to set, but only lower-upper bound doesn't exist.
But in Worst Case -> O(N) --> linear Time.

void explainUSet() {
    unordered_multiset<int> st;
    lower_bound and upper_bound function does nto works,rest all functions are same.
    as above, it does not stores in any particular order it has a better complexity
    than set in most cases,except somw when collision happens.
}


(J) Map - It is key(unique key in sorted ordered)-value(multiple) pair.
 key can be any datatype & value can be anthing
 It works in O(log n) T.C.

void explainMap() {

    map<int, int> mpp;
    mpp<int, pair<int, int>> mpp;


    mpp[1]=2; // Internally store in Map -  {1,2}
    mpp.emplace({3,1}); // Internally store in Map -  {3,1}

    mpp.insert({2,4}); // Internally store in Map -  {2,4}

    mpp<pair<int, int>, int> mpp;
e.g.mpp[{2,3}] = 10; -->Store {{2,3},10}

Stored like this
    {
        {1, 2}
        {2, 4}
        {3, 1}
    }

    for(auto it : mpp){
        cout<<it.first<<" "<<it.second<<endl; 
    }

    output - 1 2
    output - 2 4
    output - 3 1

    cout<< mpp[1]; --> value 2
    cout<< mpp[5]; --> no 5 --> null or 0.

    auto it= mpp.find(3);
    cout<<*(it).second; --> 1

    auto it = mpp.find(5); --> mpp.end() after the map

    This is the Syntax 
    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    erase,swap,size, empty are same as above
}

(K) Multimap() - duplicate & Sorted
void explainMultimap(){
    Everything same as map, only it can store multiple keys
    only mpp[key] cannot be used here
}


(L) UnorderedMap - Unique keys & not Sorted(randomized)
It works Almost all operations in Constant time O(1).
But in Worst Case - goes upto O(N) --> Linear.
void UnOrderedMap() {
    same as Set and unordered_set difference.
}

*/


// 1. Algorithms (Mandatory Code)

bool comp(pair<int,int>p1, pair<int, int>p2){
    if(p1.second < p2.second){
        return true;
    }else if(p1.second == p2.second){
        if (p1.first>p2.second)
        {
            return true;
        }
        return false;
    }
}

void explainExtra() {
    sort(a,a+n); // --> like this [start(included),end(excluded)) like USE OF STL in Normal 
    sort(v.begin(), v.end()); // --> this is using vector

    sort(a+2,a+4);  // Sort in between vector.

    sort(a,a+n,greater<int>); // ---> This is used to Sort the elements of vector in descending order.

    pair<int,int> a[] = {{1,2},{2,1},{4,1}}; // --> Sort Using pair

    // Sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending 

    sort(a,a+n,comp); // -->a-first iterator, second iterator , self written compared(bool comp).

    // {4,1}, {2,1}, {1,2}

    int num = 7; // --> 7 in binary (111)
    int cnt = __builtin_popcount(); // --> 3 bits in 7 num (so  __builtin_popcount says how many 1's) - 3 sets. 

    long long num = 165786578687; 
    int cnt = __builtin_popcountll();

    string s = "123";

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

}

int main(){
    print();
    int s=sum(1,5);
    cout<<s<<endl;
    return 0;
}
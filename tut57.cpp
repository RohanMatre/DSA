// ----- Episode :- 57 : Virtual Functions Example + Creation Rules in C++ ----

#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
       string title;
       float rating;
    public:
     CWH(string s,float r){
        title = s;
        rating = r;
     }
    virtual void display(){}
};

class CWHVideo : public CWH{
    float videoLength;
    public:
      CWHVideo(string s,float r,float vl) : CWH(s,r){
          videoLength = vl;
      }
      void display(){
          cout<<"This is an amazing video with title "<<title<<endl;
          cout<<"Rating : "<<rating<<" out of 5 stars"<<endl;
          cout<<"Length of this video is : "<<videoLength<<" minutes"<<endl;
      }
};

class CWHText : public CWH{
    int words;
    public:
      CWHText(string s,float r,int wc) : CWH(s,r){
          words = wc;
    }
    void display(){
          cout<<"This is an amazing text with title "<<title<<endl;
          cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
          cout<<"No of words in this text tutorial is  : "<<words<<" words"<<endl;
    }
};
int main(){
    string title;
    float rating,vlen;
    int words;

    // for Code with Harry Video 
    title = "Django tutorial";
    vlen=34.43;
    rating = 4.52;
    CWHVideo djvideo(title,rating,vlen);
    //djvideo.display();

    // for Code with Harry Video 
    title = "Django tutorial Text";
    words=543;
    rating = 4.62;
    CWHText djtext(title,rating,words);
    djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*
 Rules for Virtual Functions
1. They Cannot be Static. 
2. They are Accessed by object pointers.
3. Virtual fucntions can be a friend of another class.
4. A virtual Functions in Base Class can might not be used.
5. A virtual Functions is defined in the Base Class,there is no necessity of redefining it in the derived Class.
*/


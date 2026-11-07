#include <iostream>
using namespace std;
                  //HYBRID INHERITANCE
                //DIAMOND PROBLEM SOLUTION --->USE VIRTUAL KEYWORD
//virtual --> it ensures that D only gets one shared copy of A instead of two duplicates.
class A{
    public:
    int data1;
    void m1(){
        cout<<"m1 method in class A"<<endl;
    }
};
class B: virtual public A{
    public:
    int data2;
    void m2(){
        cout<<"m2 method in class B"<<endl;
    }
};
class C : virtual public A{
    public:
    int data3;
    void m3(){
        cout<<"m3 method in class C"<<endl;
    }
};

class D : public B,public C{
    public:
    int data3;
    void m4(){
        cout<<"m4 method in class D"<<endl;
    }
};
    int main(){
      
    D obj1;
    obj1.m1(); //now we can use it directly
    obj1.m2();



}


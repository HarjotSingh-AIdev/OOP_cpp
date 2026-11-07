#include <iostream>
using namespace std;
                  //MULTIPLE INHERITANCE-->multiple parents

class A{
    public:
    int data1;
    void m1(){
        cout<<"m1 method"<<endl;
    }
};
class B{
    public:
    int data2;
    void m2(){
        cout<<"m2 method"<<endl;
    }
};
class C : public A, public B{
    public:
    int data3;
    void m3(){
        cout<<"m3 method"<<endl;
    }
};

    int main(){
      
    C obj1;
    obj1.m1();
    obj1.m2();

     }



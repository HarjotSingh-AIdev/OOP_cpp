#include <iostream>
using namespace std;
               // HIERARCHICAL INHERITANCE
class A{
     public:
     int data1;
     void m1(){
          cout<<"M1 method"<<endl;
     }
};
class B: public A{
     public:
     int data2;
     void m2(){
          cout<<"M2 method"<<endl;
     }
};
class C: public A{
     public:
     int data3;
     void m3(){
          cout<<"M3 method"<<endl;
     }
};

int main(){
     B obj1;
     obj1.m1();
     C obj2;
     obj2.m1();
}

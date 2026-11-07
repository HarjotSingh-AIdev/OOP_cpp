#include <iostream>
using namespace std;
                  //INHERITANCE
                      //PROVIDE REUSABILITY OF CODE
//SINGLE LEVEL INHERITANCE
class A{//PARENT CLASS
     public:
     int data1;
     void m1(){
        cout<<"m1 METHOD"<<"\n";
     }

};
class B:public A{//CHILD CLASS
   public:
   int data2;
   void m2(){
      cout<<"m2 method"<<"\n";
   }
};

int main(){
    B obj;
    obj.m1();
    obj.m2();
}
#include <iostream>
using namespace std;
                  //HYBRID INHERITANCE
                  //DIAMOND PROBLEM-->DOUBLE COPY OF SAME FUNCTION FROM TWO DIFFERENT PARENT CLASS

//                          A
   //                    B     C
     //                     D

class A{
    public:
    int data1;
    void m1(){
        cout<<"m1 method in class A"<<endl;
    }
};
class B:public A{
    public:
    int data2;
    void m2(){
        cout<<"m2 method in class B"<<endl;
    }
};
class C : public A{
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
    obj1.B::m1();// TEMPORARY SOLUTION
    obj1.C::m1();
    // not  allowed obj1.A::m1();




}



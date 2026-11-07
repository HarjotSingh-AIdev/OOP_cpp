#include <iostream>
using namespace std;
                  //MULTIPLE INHERITANCE-->multiple parents
                  //PROBLEM-->Both parent class contain same function

class A{
    public:
    int data1;
    void m1(){
        cout<<"m1 method in class A"<<endl;
    }
};
class B{
    public:
    int data2;
    void m1(){
        cout<<"m1 method in class B"<<endl;
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
//since both parent class has fumction m1 so we had to specify to use which class as--->
    obj1.A::m1();  //  :: -->SCOPE RESOLUTION OPERATOR -Temporary solution
    obj1.B::m1();
     }



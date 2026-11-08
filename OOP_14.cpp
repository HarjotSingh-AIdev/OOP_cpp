#include <iostream>
using namespace std;
                  // PRIORITY OF CONSTRUCTORS  & DESTRUCTORS
                  //PARENT AND CHILD CLASS
//  Parent class constructor
//  child class constructor
//  child class destructor
//  Parent class destructor


class A{
    public:
    int data1;
    A(){
        cout<<"A CLASS CONSTRUCTOR"<<endl;
    }
    ~A(){
        cout<<"A class destructor"<<endl;
    }
};
class B:public A{
    public:
    int data2;
    B(){
        cout<<"B CLASS CONSTRUCTOR"<<endl;
    }
    ~B(){
        cout<<"B class destructor"<<endl;
    }
};



    int main(){
      
     B obj1;

//#OUTPUT--->
//        A CLASS CONSTRUCTOR
//        B CLASS CONSTRUCTOR
//        B class destructor
//        A class destructor

}



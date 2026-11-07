#include <iostream>
using namespace std;
                    // TYPES OF ACCESS MODIFIERS
                        //public
                        //private
                        //protected
class A{
    public:
    int data1=10;
};
class B:protected A{
     public:
     int data2=20;

     void display(){
        cout<<data1<<endl;
        cout<<data2<<endl;
     }

};

int main(){
    B obj1;
    obj1.data2=10;
   // obj1.data1=22;  cant use it because protected
    obj1.display();



}
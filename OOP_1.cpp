//--------------------------------------------------------------------------------------------------------------
                    //OOPS

//USE OF OOPS?WHY OOPS?
     //FOR MAINTAINANCE
     //SECURITY
     //REPEATION OF CODE

//FEATURE OF OOPS--->
     //CLASS & OBJECT
     //ENCAPSULATION
     //ABSTRACTION
     //INHERITANCE
     //POLYMORPHISM

//CLASS IS A BLUEPRINT OF AN OBJECT
//CLASS = MULTIPLE OBJECT
//class is a userdefined datatype.
//class does not occupy space.

//---------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class form{
    public://modifier-->Allows to use name, age in main() function . By dafault Private.
        string name;
        int age;

};

int main(){
    form obj1;
    obj1.name="Harjot Singh";
    obj1.age=17;

    form obj2;
    obj2.name="HS";
    obj2.age=17;

    cout<<obj1.name<<"  "<<obj2.name<<"\n";
    cout<<obj1.age<<"  "<<obj2.age<<"\n";

    return 0;
}












//DATA HIDEING -->PART OF ENCAPSULATION

#include <iostream>
using namespace std;

class form{
    string name;
    int age;
    static string clgName;
    public:
    form(){

    }
    form(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    static void m1(){    //ONLY CAN ACCESS STATIC MEMBERS
        cout<<clgName<<"\n";
    }

    void display()
    {
        cout<<name<<","<<age<<","<<clgName<<"\n";
    }

};
string form :: clgName="NITH";

int main(){
    form obj1("Harjot",17);
    obj1.display();

    form obj2("H",18);
    obj2.display();
    
    obj1.m1();
    form::m1();        //   ( :: )-->SCOPE RESOLUTION OPERATOR

}

//-----------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class form{
    public://Access modifier-->Allows to use name, age outside class. When not used by default(Private).
        string name;//Data Members ||properties||attributes
        int age;
    
    void initialise(string s,int a)//Member Function || behaviour
    {
        name=s;
        age=a;
    }
    void print()
    {
        cout<<name<<" :"<<age<<"\n";
    }
};

int main(){
    form obj1;
    obj1.initialise("Harjot Singh",17);

    form obj2;
    obj2.initialise("HS",17);

    obj1.print();
    obj2.print();
    return 0;
}












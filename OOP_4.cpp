
//-------------------------------------SPECIAL METHOD ----------------------------------------------------------------------------

#include <iostream>
using namespace std;

class form{
    public:
        string name;
        int age;
    
    form()   //Default constructor
    {   cout<<"what`s up\n";
        name="OPP";
        age=1000;
    }
    //parametrized constructor
    form(string s, int a)//CONSTRUCTOR(Speecial method):-->Does not have return type 
    {   cout<<"hello\n";
        name=s;
        age=a;
    }
    void print()
    {
        cout<<name<<" :"<<age<<"\n";

    }
};

int main(){
    form obj;
    form obj1("hs",17);
    obj1.print();
    obj.print();
    return 0;}

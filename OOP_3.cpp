
//-------------------------------------SPECIAL METHOD ----------------------------------------------------------------------------

#include <iostream>
using namespace std;

class form{
    public:
        string name;
        int age;
    
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

    form obj1("RAJU",17);

    form obj2("HS",17);

    obj1.print();
    obj2.print();
    return 0;
}

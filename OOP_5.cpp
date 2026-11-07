#include <iostream>
using namespace std;

int main(){

class form{
    public:
          string name;
          int age;
    
    form(string n,int ag){
        name=n;
        age=ag;
   
    }
    ~form(){//Destructer-->runs after each obj is closed
         cout<<"Destructer called!\n";
    
    }
    void display(){
        cout<<name<<"\n";
        cout<<age<<"\n";
    }
    };

    form obj1("HS",17);
    //obj1.display();
    form obj2("M",17);
   // obj2.display();
    obj1.display();

}
















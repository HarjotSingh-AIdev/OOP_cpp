#include <iostream>
using namespace std;

class form{
    private:
        string name;
        int age;
        string password;
    public:
    
    form(string n,int ag,string paswd)
    {
        name=n;
        age=ag;
        password=paswd;
    }
    
    void display()
    {
        cout<<"{NAME:"<<name<<","<<" AGE :"<<age<<"}\n";
    }
    string getName()//Getter
    {
        return name;
    }

    int getAge()//Getter
    {
        return age;
    }
    void setAge(int age)//Setter
    {
        this->age=age;//use when variable and parameter is name is same
    }
};

int main(){

    form obj1("HARJOT SINGH",17,"har12345");
    obj1.display();
    cout<<obj1.getName()<<"\n";
    cout<<obj1.getAge()<<"\n";
    obj1.setAge(18);
    cout<<obj1.getAge();
}
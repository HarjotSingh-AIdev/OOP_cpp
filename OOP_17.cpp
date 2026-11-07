#include <iostream>
using namespace std;
            //Dynamic polymorphism
             //we can use override keyword
class animal
{
    public:
    virtual void sound()
    {
        cout<<"Oooooooooo...."<<endl;
    }
};

class dog : public animal
{
   public:
   void sound()
   {
    cout<<"bho bho.."<<endl;
   }
};

class cat :public animal
{
    public:
    void sound()
    {
        cout<<"Meow meow"<<endl;
    }
};

int main()
{
    animal *obj=new cat();
    obj->sound();
    animal *obj1= new dog();
    obj1->sound();
}
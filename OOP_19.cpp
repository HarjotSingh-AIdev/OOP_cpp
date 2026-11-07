#include <iostream>
using namespace std;
                  // Abstraction-->Implementation Hideing 
                  //Where as Encapsulation -->Data Hideing
                     // Hideing unnessecary details
                     //Two types--> classes, abstract class
    
class car
{
    public:
    virtual void start()=0; //Pure Virtual Function
                            // class with pure virtual function is known as abstract class;
                             // object of abstract class can not be formed
};

class Tesla :public car{// If child class contain no implementation then it act as abstract class
    public :
    void start(){
        cout<<"Tesla car is starting"<<endl;
    }
};
    
int main(){
  //  car obj;
    Tesla obj1;
    obj1.start();
    return 0;
}





#include <iostream>
using namespace std;
                //  POLYMORPHISM-->Multiple Forms
                     // Compile-time polymorphism / Static or early binding .
                     // Runt-time polymorphism / Dynamic or late binding.
class A
{    
     public:
     int data;
     //FUNCTION OVERLOADING
     double max(int a,int b)
     {
          return a>b ? a:b;
     }
     double max(int a, double b)
     {
          return a>b ? a:b;
     }
    double max(double a ,int b)
     {
          return a>b? a:b;
     }
     double max(double a, double b)
     {
          return a>b? a:b;
     }

};

int main(){
     A obj1;    
     cout<<obj1.max(13.11,13.101);

}
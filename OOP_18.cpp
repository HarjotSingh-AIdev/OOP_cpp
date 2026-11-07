#include <iostream>
using namespace std;
                //Exception Handling
int main(){
    cout<<"hello"<<endl;
    try{
        int a=100,b=0;
        if(b==0){
            throw "Divide by zero";
        }
    cout<<(a/b)<<endl;
    }
    catch(const char* msg){
        cout<< msg<<endl;}

   catch(...){  //Handles all exceptions
       cout<< "unknown exception"<<endl;
    }

    cout<<"Exception Handling"<<endl;
}



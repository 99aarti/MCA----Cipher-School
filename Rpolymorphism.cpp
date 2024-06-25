//runtime polymorphism/late binding
//virtual function is a member function in the base class that you jredefine in the derived class.
//Virtual function must be member of some class 
// they are accessed through object pointer
// A Virtual function must be define in the base class, even through it is not used
#include<iostream>
using namespace std;

class Base{
    public :
    void display(){
        cout << "From Derived " << endl;
        
        }

};
class Derived : public Base{
    public:
    virtual void display(){
        cout << "From Derived " << endl;
    
    }
};
int main(){
    Derived d1;
    Base *ptr = 
}

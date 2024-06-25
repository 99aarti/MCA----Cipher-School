//pure virtual functions
// if a function doesnt have any use in the base class but the fuction must be implemented by all its classes
// a class that contain pure virtual function is known as abstract class

#include<iostream>
using namespace std;
class Employee{
    public :
    virtual void salary(){
        cout << "Full time Salary " << endl;

    }
};
class Contract{
    public:
    void salary()
}

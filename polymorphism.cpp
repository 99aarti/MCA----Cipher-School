//polymorphism-more than one form//
// poly- many, morph-from//


#include<iostream>
using namespace std;

class Cout{
    private:
    int value;

    public:
    cout(){
        value = 5;
    
    }
    void operator ++(){
        value += 10;
    }
    void display() {
        cout<<"Count: " <<value <<endl;
    }
};
int main(){

    Count c1;
    c1.display();
    ++c1;

    c1.display();
}
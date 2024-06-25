//set -> * it except only unique element--- no two elements in a set can be equal
// * imutable --we can add or remove elements from a set, but we cant change the value of existing elements
// sorted order -- by default order is increasing but we have an option to change that
// duplicate value consider nhi karta hai


#include<iostream>
#include<set>
using namespace std;

int main() {
    // for ascending order
    set<int> set1 = {3,8,1,4,9};
// for dsecnding order
   //set<int, greater<int>>set1 = {3,8,1,4,9};

   set1.insert(20);
   //set1.erase(1); //delete value from the set
   //set1.clear(); -- delete all elements

    cout << set1.size();
    for(int i : set1){
        cout << i << " ";
    }
}
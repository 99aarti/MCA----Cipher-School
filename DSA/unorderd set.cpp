#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> un_set1 = {4,2,6,1,3,9};
    un_set1.insert(20);

    for(int i : un_set1) {
        cout << i << " ";
    }
}
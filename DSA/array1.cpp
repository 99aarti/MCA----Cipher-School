#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2,3,5,6,8};

    for(int item : arr){
        cout << item << " ";

    }
    cout << arr[2];

    arr[0] = 10;

    cout << endl;

    for(int item : arr){
        cout << item <<" ";
    }

}
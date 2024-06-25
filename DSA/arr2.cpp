#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[5] = {2,3,1,4,5};

    cout << "Enter 5 numbers " ;
    

    for (int i = 0; i< 5; i++){
        cin >> arr[i];
    }

    printArr(arr,5);

    //arr[0] = 10;

   // cout << endl;

   // for(int item : arr){
     //   cout << item <<" ";
    }


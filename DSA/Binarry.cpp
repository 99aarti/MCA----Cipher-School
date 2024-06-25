#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
int start = 0;
int end = size -1;
int mid = (start + end)/2;

if(arr[mid] == key) {
    return mid;
}
while(start<=end){
    if(key > arr[mid]) {
        //go to right part of every array
        start - mid + 1;
    }
    else{
        //go to left
        end = mid - 1;
    }
    mid = (start + end) /2;
}
    return -1; 
}
int main(){
    int arr[] = {3,5,7,8,12,24,56,78};
    cout<<binarySearch(arr,8,12);
}


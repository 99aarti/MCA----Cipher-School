#include<iostream>
using namespace std;

void reverseArr(int arr[], int n ) {
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
//swap alternative elements of array
//pair sum
//triplet sum
//sort 0's and  1's
//find unique elements in array
//find duplicates

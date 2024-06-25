// tIME complexity- it is the amount of time by an algo to run as a function of length of the input
#include<iostream>
using namespace std;

int firstoccurance(int arr[], int size, int key)
int start = 0;
int end = size -1;
int mid = (start + end)/2;
int ans = -1;

while(start<=end){

}

if(arr[mid] == key) {
    ans = mid;
    end = mid -1; 
}
else if(key < arr[mid]) {
end = mid -1;

}
else if(key > arr[mid] ){
    start = mid+1;

}
mid = (start + end)/2

/*lower bound
given an sorted array of N integer and an in integer x, find the lower bound of x
 lower bound algo finds the first or the smallst index in a sorted array where the value at that given index is 
greater than or equal to a given key i.
e->x */




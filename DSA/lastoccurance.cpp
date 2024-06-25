#include<iostream>
using namespace std;

int lastoccurance(int arr[], int size, int key)
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

int main() {

    
}


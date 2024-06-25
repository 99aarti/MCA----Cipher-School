#include <iostream>
using namespace std;

// Recursive Binary Search Function
int binarySearch(int arr[], int low, int high, int key) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        
        // If the element is present at the middle itself
        if (arr[mid] == key)
            return mid;
        
        // If the element is smaller than mid, then it can only be present in the left subarray
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
        
        // Else the element can only be present in the right subarray
        return binarySearch(arr, mid + 1, high, key);
    }
    // Element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}
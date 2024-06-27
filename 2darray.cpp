#include<iostream>
using namespace std;

int main() {
    // Define the dimensions of the 2D array
    const int numRows = 3;
    const int numCols = 3;

    // Example 2D array
    int array[numRows][numCols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int maxSum = 0; 

    for (int i = 0; i < numRows; ++i) {
        int currentRowSum = 0;

        for (int j = 0; j < numCols; ++j) {
            currentRowSum += array[i][j];
        }

        if (currentRowSum > maxSum) {
            maxSum = currentRowSum;
        }
    }

    cout << "The maximum sum of a row is: " << maxSum << endl;

    return 0;
}


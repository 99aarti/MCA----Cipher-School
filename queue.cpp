#include <iostream>
#include <queue>
using namespace std;
int main() {

    queue<int> myqueue;
      
      // enqueue the numbers into array

      myqueue.push(10);
      myqueue.push(20);
      myqueue.push(30);

      cout << "myqueue: ";
      while (!myqueue.empty()) 
      {
         int x = myqueue.front();
         cout << x << " ";
         myqueue.pop(); 
      }
      return 0;
}


#include <iostream>
using namespace std;
int main() 
{
    // array in cpp //
    int element;
    cout<<"Enter the element for array: " ;
    cin>>element;
    int arr[element];
    for(int i=0; i<element; i++)
    {
        cout << "Element [" << i << "] = ";
        cin >> arr[i];
    }
    
 
} 


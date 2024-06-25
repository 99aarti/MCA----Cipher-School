#include <iostream>
using namespace std;

int main()
{
    int element;
    cout<<"enter the element =";
    cin>>element;
    int arr[element];
    for(int i = 0; i<element; i++)
    {
        cout<<"enter the data =";
        cin>>arr[i];
    }

    int number, position; 
    cout<<"Enter the number you want to insert in array:" ; 
    cin>>number;
    cout<<"Enter the position you want to enter in the array:" ;
    cin>>position;
    position=position-1;
    for(int i=(element-1); i>=position; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[position]=number;
    for(int i=0; i<element; i++)
    {
        cout<<""<<arr[i];
    }
    
}   

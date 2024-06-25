#include<iostream>
using namespace std;
int main()
{
    int element;
    cout<<"enter the element=";
    cin>>element;
    int arr[element];
    for(int i = 0; i<element; i++)
    {
        cout<<"enter the data=";
        cin>>arr[i];
    }
    int search;
    cout<<"enter search=";
    cin>>search;
    for (int i = 0; i < element; i++)
    {
        if (arr[i]==search)
        {
            cout<<"element found="<<i;
            return 0;
        }
    }
    cout<<"element not found";        
    
}
#include <iostream>
using namespace std;

int main()
{
    int element;
    cout<<"enter the element";
    cin>>element;
    int arr[element];
    for (int i=0; i<element; i++)
    {
        cout<<"enter the data:";
        cin>>arr[i];
    }
    // delete array//
    int number;
    cout << "Enter the number you want to delete:";
    cin >> number;
    int index = -1;
    for (int i = 0; i < element; i++)
    {
        if (arr[i] == number)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        for (int i = index; i < (element - 1); i++)
        {
            arr[i] = arr[i + 1];
        }
        element--;
        for (int i = 0; i < element; i++)
        {
            cout << " " << arr[i];
        }
    }
    else
    {
        cout << "Number not found in the array.";
    }
    return 0;
}

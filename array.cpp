#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the size of array";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements: ";
    for (int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe elements are: ";
    for (int i = 0;i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
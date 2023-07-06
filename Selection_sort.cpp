// Implementation of Selection Sort //
// Hum unsorted array mein se min element ko pick krte hai aur usko unsorted ki first position pe place krdete hai //

#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    return arr[n];
}

void print_arr(int arr[], int n)
{
    cout<<"Sorted Array :-"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of an Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,size);
    print_arr(arr,size);
    return 0;
}
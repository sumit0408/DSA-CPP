// Implementation of Bubble sort.... //
// Bubble sort mein adjacent elements ki swaping krte hai.....aur humara array peeche se sort hota hai... //


#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr[n];
}
void print_arr(int arr[], int n)
{
    cout<<"Sorted Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
int main()
{
    int size;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    bubble_sort(arr,size);
    print_arr(arr,size);
    return 0;
}
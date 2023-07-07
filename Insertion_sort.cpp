// Implementation of Insertion Sort.. //
#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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
    cout<<"Enter the elements of an Array : "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr,size);
    print_arr(arr,size);
    return 0;
}

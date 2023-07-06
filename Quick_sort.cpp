// implementation of Quick sort //

#include<bits/stdc++.h>
using namespace std;

void swap(int arr[], int m, int n)
{
    int temp=arr[m];
    arr[m]=arr[n];
    arr[n]=temp;
}

int partition(int arr[], int l , int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        while(arr[i]<=pivot) i++;
        while(arr[j]>pivot) j--;
        if(i<j)
        {
            swap(arr,i,j);
        }
        swap(arr,l,j);
    }
    return j;
}

void quick_sort(int arr[], int l, int h)
{
    if(l<h)
    {
        int pivot=partition(arr,l,h);
        quick_sort(arr, l, pivot-1);
        quick_sort(arr, pivot+1, h);
    }
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
    cout<<"enter the size of an array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr, 0, size-1);
    print_arr(arr,size);
    return 0;
}
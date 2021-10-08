#include<iostream>
#include<climits>
using namespace std;

binarysearch(int arr[],int n)//Array must be sorted already
{
    int s=0,e=n-1,mid,index=0,key;
    cout<<"Enter Key : ";
    cin>>key;
    bool found=false;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            index=mid;
            found=true;
            break;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }

    }
    if(found==true)
    {
        cout<<"Index of Element : "<<index;
    }
    else
    {
        cout<<"Element not present ";
    }

}

int main()
{
    int n,i;
    cout<<"Enter Size of Array ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    binarysearch(arr,n);


}

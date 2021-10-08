#include<iostream>
#include<climits>
using namespace std;

max_min(int arr[],int n)
{
    int i,maxi=INT_MIN,mini=INT_MAX;

    for(i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
        if(arr[i]<mini)
        {
            mini=arr[i];
        }
    }
    cout<<"Maximum Number : "<<maxi<<endl;
    cout<<"Minimum Number : "<<mini;
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
    max_min(arr,n);


}

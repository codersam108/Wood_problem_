#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int ispossible(vector<int> arr,int m,int n,int mid,int start)
{
    int x;
    int t,sum=0,sum1=0,k;
    for(x=0;x<m;x++) {
        if (arr[x] - mid > 0) {
            t = arr[x] - mid;
            sum = sum + t;
        }
    }
    for(x=0;x<m;x++)
    {
        if(arr[x]-start>0)
        {
            k=arr[x]-start;
            sum1=sum1+k;
        }
    }
    if(sum==n)
    {
        return 1;
    }
    else if(sum1==n)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
int maxpossiblewood(vector<int> arr,int m,int n)
{
    sort(arr.begin(),arr.end());
    int start=0;
    int  maxi=-1;
    for(int x=0;x<m;x++)
    {
        maxi=max(maxi,arr[x]);
    }
    int end=maxi;
    int mid=start+((end-start)/2);
    int answer=-1;
    while(start<=end)
    {
        if(ispossible(arr,m,n,mid,start)==1)
        {
            answer=mid;
            end=mid-1;
        }
        else if(ispossible(arr,m,n,mid,start)==2)
        {
            answer=start;
            end=mid-1;

        }
        else
        {
           start=mid+1;
        }
        mid=start+((end-start)/2);
    }
    return answer;

}
int main()
{
    int m,n,values,x;
    vector<int>arr;
    cout<<"Enter the number of trees in the row "<<endl;
    cin>>m;
    cout<<"Enter the number of woods which needs to be cut "<<endl;
    cin>>n;
    cout<<"Lets fill the vector "<<endl;
    for(x=0;x<m;x++)
    {
        cin>>values;
        arr.push_back(values);
    }
    int ans;
    ans= maxpossiblewood(arr,m,n);
    cout<<"The maximum possible height which should be kept so that we meet the target of cutting "<<n<<" woods is "<<ans<<endl;

}

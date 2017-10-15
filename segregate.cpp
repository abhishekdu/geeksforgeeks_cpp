#include<iostream>
using namespace std;

void segregate()
{
    int n,a[500];
    cout<<"Enter no. of element in array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        count++;
    }
    for(int i=0;i<n;i++)
    {
        if(count>0)
        {
             a[i]=0;
             count--;
        }
        else
        {
            a[i]=1;
        }  
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int t;
   cout<<"Enter no of times you want to run this ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        segregate();
    }
    return 0;
}

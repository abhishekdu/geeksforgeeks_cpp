#include<iostream>
using namespace std;

void pair_is()
{
    int n,a[1000];
    //cout<<"Enter no of element in the array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && a[i]>=0 && a[j]>=0)
            {
                a[i]=a[j]=-1;
                break;
            }
        }
        
    }
    int temp[2],count=0;;
    for(int i=0;i<n;i++)
    {

        if(a[i]>0)
        temp[count++]=a[i];
    }
    if(temp[0]>temp[1])
    {
        temp[0]=temp[0]+temp[1];
        temp[1]=temp[0]-temp[1];
        temp[0]=temp[0]-temp[1];
    }
    cout<<temp[0]<<" "<<temp[1];
    cout<<"\n";
}
int main()
{
    int t;
 //   cout<<"Enter no. of times you want to run this";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        pair_is();
    }
    return 0;
}

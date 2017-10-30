#include<iostream>
using namespace std;

void transpose()
{
    int n,a[20][20],b[20][20];
    cout<<"Enter size of matrix ";
    cin>>n;
    //Input
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //copying array 1 to array2
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j]=a[i][j];
        }
    }
    //Transposing
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=b[j][i];
        }
    }
    //output
    for( int i=0;i<n;i++)
    {
        //cout<<"\n";
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    int t;
    cout<<"Enter no. of times you want to run this ";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        transpose();
    }
    return 0;
}

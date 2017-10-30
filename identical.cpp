#include<iostream>
using namespace std;

void identical()
{
    int n,a[20][20],b[20][20];
    cout<<"Enter size of matrix ";
    cin>>n;
    //Input1
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //input2
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cin>>b[i][j];
        }
    }
    //checking
  	int flag=0;
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
            	flag=1;
            	break;
			}
        }
    }
    //output
    if(flag==1)
    cout<<"No \n";
    else if(flag==0)
    cout<<"Yes \n";
}
int main()
{
    int t;
    cout<<"Enter no. of times you want to run this ";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        identical();
    }
    return 0;
}

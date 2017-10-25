#include <iostream>
#include<math.h>
using namespace std;
int a[100];
void reverse(int a[],int d,int n)
{
	   int i,j;
    for(i=d,j=n;i<=j;i++,j--)
    {
    			int temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
	}
}

void rotate()
{
    int n,d;
    //cout<<"Enter no. of elemnts";
    cin>>n;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //cout<<"Enter no. of times you want to rotate the array";
    cin>>d;
    
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main() {
    int t;
	//cout<<"Enter no. of times you want to run this ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    rotate();
	}
	return 0;
}

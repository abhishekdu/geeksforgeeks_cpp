#include <iostream>
using namespace std;

void rotate()
{
    int n,a[100];
    cout<<"Enter no. of elemnts";
    cin>>n;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int size=n-1; 
    int c=0;
    	int new_size=n;
    for(int i=1;i<n;i++)
    {
        //swapping
        int temp[1];
        temp[0]=a[size];
        for(int j=size-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=temp[0];
        //swapping end
       	    if(a[new_size-i]>=0 && new_size-i>=0)
        {
            a[new_size-i]=-1;
       
		}
        else
        {
            a[0]=-1;
  
        }
       c=0;//to count the size of array
    
	for(int k=0;k<new_size;k++)
	{
		if(a[k]>=0)
		a[c++]=a[k];
	}
	new_size=c;
	
	size--;
	}
    
    cout<<a[0]<<"\n";
}
int main() {
    int t;
	cout<<"Enter no. of times you want to run this ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    rotate();
	}
	return 0;
}

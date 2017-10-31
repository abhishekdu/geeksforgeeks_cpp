#include <iostream>
using namespace std;

void rotate()
{
    int n,a[100];
    //cout<<"Enter no. of elemnts";
    cin>>n;
    
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int size=n-1; 
    	
    	
        //swapping
        int temp[1];
        temp[0]=a[size];
        for(int j=size-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=temp[0];
        //swapping end
        
    for(int k=0;k<=size;k++)
    {
        cout<<a[k]<<" ";
    }cout<<" \n";

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

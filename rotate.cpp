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
    
        //swapping clockwise by 1 place
        int temp[1];
        temp[0]=a[0];
        for(int j=1;j<n-i+1;j++)
        {
            a[j-1]=a[j];
        }
        a[n-i]=temp[0];
        
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
      
    
    
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

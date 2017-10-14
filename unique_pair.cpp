#include <iostream>
using namespace std;
void find_pair()
{
    int n,a[1000][2]={0};
    //cout<<"Enter no. of elements ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0];
    }
    int flag=1;
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            
        cout<<a[j][0]<<" "<<a[k][0]<<" "<<j<<" "<<k;
            if((a[j][0]==a[k][0]) && (a[j][1]!=1) && (a[k][1]!=1))
            {
               flag=0; 
               a[j][1]=1;
               a[k][1]=1;
               cout<<"flag";
               break;
               
            }
            
        }
        if(flag==1)
        cout<<"c"<<a[j][0]<<" ";
        flag=1;
    }
    cout<<"\n";
    
}
int main() {
    int t;
	//cout<<"Enter no. of times you want to run ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    find_pair();
	}
	return 0;
}

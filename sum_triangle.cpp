#include<iostream>
using namespace std;

int n,a[1000],temp[1000];

static int index=0; //for printing in last

void add(int a[],int n)
{
	int i=0,size=n;
	if(size<=0)
	return ;
	//putting elemnt in temp array to make a traingle and print in last
    for(int i=size-1;i>=0;i--)
    {
        temp[index++]=a[i];
    }
    //adding consecutive elements
    while(n>0)
    {
        a[i]=a[i]+a[i+1];
        i++;
	    n--;
    }
    size--;
    add(a,size);
}
void sum()
{
    
    cout<<"Enter size of matrix ";
    cin>>n;
    
    for( int i=0;i<n;i++)
    {
            cin>>a[i];
    }
    add(a,n);
    //printing the output which is in a form of traingle
    for( int i=index-1;i>=0;i--)
    {
            cout<<temp[i]<<" ";
    }
}
int main()
{
    int t;
    cout<<"Enter no. of times you want to run this ";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        sum();
    }
    return 0;
}

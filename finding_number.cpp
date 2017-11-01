#include<iostream>
using namespace std;

int n,mid,a[200],search;

int findmiddle(int a[200],int i,int n,int search)
{
	if(i==n)
	return -999;
	//finding the element where array changes from increasing to decreasing
    for(int j=i;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            return j;
        }
    }
    //finding the middle element in array
    return (i+n)/2;
    
}
int bsearching(int a[200],int i,int n,int search)
{
	mid=(i+n)/2;
	if(search==a[mid])
	return mid;
	else if(search>a[mid])
	bsearching(a,mid,n,search);
	else if(search<a[mid])
	bsearching(a,0,mid,search);
	else if(i==n)
	return -999;
}
int searching(int a[200],int i,int n,int search)
{
    mid=findmiddle(a,i,n,search);
   // cout<<"middle "<<mid<<" ele "<<a[mid]<<" search"<<search<<"\n";
	if(search==a[mid])
        return mid;
    else if(search>a[0] and search <a[mid])
    	bsearching(a,i,mid,search);
    else if(search<a[0] and search <a[mid] )
    	bsearching(a,mid+1,n,search);
    else if(mid==-999)
	return -999;	
}
void find()
{
    
    //cout<<"Enter size of array and element to be searched";
    cin>>n>>search;
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
     
    }
	int index;
    index=searching(a,0,n,search);
    if(index==-999)
    cout<<"OOPS! NOT FOUND";
    else
	cout<<index;
    cout<<"\n";
    
}
int main()
{
    int t;
    //cout<<"Enter no. of times you want to run this ";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        find();
    }
    return 0;
}

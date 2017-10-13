#include <iostream>
using namespace std;

void swap()
{
    int a,b;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"Swapped no are "<<a<<" "<<b<<"\n";
}
int main() {
    int t;
	cout<<"Enter no. of times you want to run this";
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    swap();
	}
	return 0;
}

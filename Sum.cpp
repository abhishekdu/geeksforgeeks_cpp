#include <iostream>
using namespace std;

void sum()
{
    long n,sumo=0,sume=0;
    cout<<"Enter integer";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        sume=sume+i;
        else if(i%2!=0)
        sumo=sumo+i;
    }
    cout<<sumo<<" "<<sume<<"\n";
}
int main() {
    int t;
	cout<<"Enter no, of times you want to run this ";
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    sum();
	}
	return 0;
	
}

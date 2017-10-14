#include<iostream>
#include<iomanip>
using namespace std;

void ap()
{
    float a,d,ans,sum=0.0;
    int n;
    cout<<"Enter a,d,n ";
    cin>>a>>d>>n;
    cout<<a<<" "<<d<<" "<<n<<" ";
   
    sum=(n/2)*(2*a + (n-1)*d);
    printf("%.2f",sum);
    cout<<"\n";
}
int main() {
     int t;
    cout<<"Enter no. of times you want to run this";
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        ap();
    }
	return 0;
}

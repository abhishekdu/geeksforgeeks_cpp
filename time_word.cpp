#include<iostream>
using namespace std;
string basic(int num)
{
	if(num==1)
	return "one";
	else if(num==2)
	return "two";
	else if(num==3)
	return "three";
	else if(num==4)
	return "four";
	else if(num==5)
	return "five";
	else if(num==6)
	return "six";
	else if(num==7)
	return "seven";
	else if(num==8)
	return "eight";
	else if(num==9)
	return "nine";
	else if(num==10)
	return "ten";
	else if(num==11)
	return "eleven";
	else if(num==12)
	return "twelve";
	else if(num==13)
	return "thirteen";
	else if(num==14)
	return "fourteen";
	else if(num==15)
	return "fifteen";
	else if(num==16)
	return "sixteen";
	else if(num==17)
	return "seventeen";
	else if(num==18)
	return "eighteen";
	else if(num==19)
	return "nineteen";
	else if(num==20)
	return "twenty";

}
string name(int num)
{
	string temp;
	
	if(num<=20)
	{
		return basic(num);
	}
	else if(num>20 && num<30)
	{
		num=num%10;
		string temp="twenty";
		return "twenty "+basic(num);
	}
}
void time()
{
	int h,m,choice;
	string nameis,nameis2;
	//cout<<"Enter hour and minutes ";
	cin>>h>>m;
	
	if(m==0)
		choice=1;
	else if(m==15)
		choice=2;
	else if(m==30)
		choice=3;
	else if(m==45)
		choice=4;
	else if(m>1 && m<30)
		choice=5;
	else if(m>30 && m<60)
		choice=6;
		
		switch(choice)
		{
			case 1:
				nameis=name(h);
				cout<<nameis<<" o' clock ";
				break;
			case 2:
				nameis=name(h);
				cout<<"quarter past "<<nameis;
				break;
			case 3:
				nameis=name(h);
				cout<<"half past "<<nameis;
				break;
			case 4:
			if(h==12)
				nameis=name(1);
			else
				nameis=name(h+1);
				cout<<"quarter to "<<nameis;
				break;
			case 5:
				nameis=name(h);
				nameis2=name(m);
				cout<<nameis2<<" minutes past "<<nameis;
				break;
			case 6:
			
				nameis=name(h+1);
				m=60-m;
				
				nameis2=name(m);
				if(m==1)
				cout<<nameis2<<" minute to "<<nameis;
				else
				cout<<nameis2<<" minutes to "<<nameis;
				break;


		}
	cout<<"\n";
}
int main()
{
	int t;
	//cout<<"Enter no. of times you want to run this";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		time();
	}
}

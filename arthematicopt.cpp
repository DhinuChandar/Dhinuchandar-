#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float n1,n2;
	int opt;
	
	
	cout<<"enter the two no. for addition\n";
	cout<<"enter the two no.for subtraction\n";
	cout<<"enter the two no.for multiplication\n";
	cout<<"enter the two no.for division\n";
	cin>>opt;
	
	cout<<"enter the two numbers";
	cin>>n1>>n2;
	
	switch(opt)
	{
		case 1:
			cout<<"The addition of numbers:"<<n1+n2;
		    break;
		case 2:
			cout<<"The subtraction of numbers:"<<n1-n2;
			break;
		case 3:
			cout<<"The multiplication of numbers:"<<n1*n2;
			break;
		case 4:
			cout<<"The division of numbers:"<<n1/n2;
			break;
			
	}
	getch();
}

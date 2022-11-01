#include<iostream>
using namespace std;
int main()
{
	int decimalnum,rem,i=0;
	char hexadecimalnum[50];
	cout<<"enter the decimal number : ";
	cin>>decimalnum;
	while(decimalnum!=0)
	{
		rem=decimalnum%16;
		if(rem<10)
		rem=rem+48;
		else
		rem=rem+55;
		hexadecimalnum[i]=rem;
		i++;
		decimalnum=decimalnum/16;
	}
	cout<<"\n equivalant haxadecimal value : ";
	for(i=i-1;i>=0;i--)
	cout<<hexadecimalnum[i];
	return 0;
}

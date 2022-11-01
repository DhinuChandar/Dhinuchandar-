#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,c,n;
	cout<<"enter the number :";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<=n;i++){
		a=b;
		b=c;
		c=a+b;
		cout<<" "<<c;
	
	}
	return 0;
}

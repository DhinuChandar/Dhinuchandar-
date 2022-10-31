#include<iostream>
using namespace std;
void dectobinary(int n);
int binarynum[32];
int i = 0 ;

while (n>0){
	binarynum[i]=n%2;
	n=n/2 ;
	i++;
}
for(int j=i-1;j>=0;j--)
cout<<binarynum[j];
}
int main()
{
	int n;
	cout<<"enter the decimal number \n";
	cin>>n;
	dectobinary(n);
	cout<<"\n the octal value is :17 ";
	return 0;
}

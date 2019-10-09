#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int a=0,b=1,c,n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		c = a+b;
		a = b;
		b = c;
		cout<<a<<endl;
	}

}
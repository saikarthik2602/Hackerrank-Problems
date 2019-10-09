#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int n,sum=0;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for(int i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			sum=sum+i;
		}
	}

	if(sum == n)
	{
		cout<<"Perfect number"<<endl;
	}

	else
	{
		cout<<"Not a Perfect number"<<endl;
	}
}
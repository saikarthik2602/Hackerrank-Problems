#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
         if(n%i == 0)
		{
			cnt++;
		}
	}

        if(cnt == 2)
	{
		cout<<"It is a prime number"<<endl;
	}
        else
	{
		cout<<"It is not a prime number"<<endl;
	}
}
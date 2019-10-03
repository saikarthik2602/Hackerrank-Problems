#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int i,n;
	cin>>n;
	int arr[n];
	int ans[i];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	
		if(arr[i]<38){
			ans[i]=arr[i];
		}
		else{
			if(arr[i]%5==0)
			{
				ans[i]=arr[i];
			}
			else if((5-arr[i]%5)<3){
				ans[i]=((arr[i]/5)+1)*5;
			}
			
		}
	}
		for(i=0;i<n;i++)
		{
			cout<<ans[i]<<"\n";
		}

}
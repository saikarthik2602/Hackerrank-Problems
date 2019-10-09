#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(void)
{
char c;
int  n1,n2;
  cout<<"enter your operation that you want to form  +,-,/,*,s,%"<<endl;
  cin >>c;
  cout<<"enter your first num"<<endl;
  cin>>n1;
  cout<<"enter your second num"<<endl;
  cin>>n2;
int t;

     if(c == '+')
     {
     	cout<<n1+n2<<endl;
     }
     else if(c == '-')
     {
     	cout<<n1-n2<<endl;
     }
     else if(c == '/')
     {
     	if(n2 == 0)
     	{
     		cout<<"invalid"<<endl;
     	}
     	else{
     	cout<<double(n1)/double(n2)<<endl;
     }
 }
     else if(c == '*')
     {
     	cout<<n1*n2<<endl;
     
     }
     else if(c == '%')
     {
     	cout<<n1%n2<<endl;
     }
     else 
     {
     	cout<<"Invalid character"<<endl;
     }
  //see the code
 }

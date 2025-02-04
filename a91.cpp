#include<iostream>
using namespace std;
int main()
{
	/*find the multiplication of  loop */
int n ;
int mul=1;
cout<<"enter the number "<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{mul =mul*i;	
}
cout<<"the multiplication  is "<<mul<<endl;
	return 0;
}
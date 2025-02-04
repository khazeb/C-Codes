	/*find the 2 tables  of 2 numbers*/
#include<iostream>
using namespace std;
int main()
{

	int n;
	cout<<"enter the 1st number "<<endl;
	cin>>n;
int n1;
cout<<"enter the 2nd number "<<endl;
cin>>n1;
 cout<<"the table of 1st number is "<<endl;
 for(int i=1;i<=10;i++)
 {
 	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
 }
 cout<<"the table of 2nd number is "<<endl;
 for(int i=1;i<=10;i++)
 {
 	cout<<n1<<" x "<<i<<" = "<<n1*i<<endl;
 }
	return 0;
}
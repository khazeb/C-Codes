#include<iostream>
using namespace std;
int main()
{
	/*find the count of  number in an array */
	int n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the"<<n<< "elements of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count=0;
	int num;
	cout<<"enter the number to search "<<endl;
	cin>>num;
for(int i=0;i<n;i++)
{
	if(num==arr[i])
	{
		count++;
	}
}
cout<<"the elemet  "<<num<<"  is presnet   "<<count <<"  times in the array"<<endl;
	return 0;
}
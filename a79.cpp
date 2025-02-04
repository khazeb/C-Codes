#include<iostream>
using namespace std;
int main()
{
	/*find the grades of students*/
	int marks;
	cout<<"enter the marks of the students "<<endl;
	cin>>marks;
	if(marks>0){
	
if(marks<=35)
{
	cout<<"Fail"<<endl;
}
else if(marks<=50&& marks>35)
{
	cout<<"Pass"<<endl;
}
else if(marks<=75&& marks>50)
{
	cout<<"Good"<<endl;
}
else if (marks<=100&&marks>75)
{
	cout<<"Excellent"<<endl;
}
else{
	cout<<"invalid number "<<endl;
}
}
else{
	cout<<"negative numbers are not allowed"<<endl;
}
	return 0;
}
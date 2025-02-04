#include<iostream>
using namespace std;
int main()
{
	/*E D C B A
      E D C B A
      E D C B A
      E D C B A
      E D C B A */
char i,j;
for(int i='A';i<='E';i++)	
{
	for(int j='E';j>='A';j--)
	{
		cout<<char(j)<<" ";
	}
	cout<<endl;
}
	return 0;
}
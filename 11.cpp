//To print the following pattern:
//	1
//	2 3
//	4 5 6
//	7 8 9 10
#include<iostream>
using namespace std;
int main(){
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			cout<<(i+j-1)<<" ";
	
		}
		cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
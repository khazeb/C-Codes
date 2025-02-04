//To print the following pattern:
//	1
//	3 5
//	5 7 9 
//	7 9 11 13
//  9 11 13 15 17
#include<iostream>
using namespace std;
int main(){
	int t;
	for(int i=1;i<=5;i++){
		t=i-1;
		for(int j=1;j<=i;j++){
			cout<<t+i<<" ";
	        t+=2;
		}
		cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
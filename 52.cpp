//	TO print the following pattern:
//  54321 
//  54321
//  54321
//  54321		     
//  54321
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
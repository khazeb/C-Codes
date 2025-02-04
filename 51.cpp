//	TO print the following pattern:
//  55555
//	44444
//	33333
//	22222
//	11111
#include<iostream>
using namespace std;
int main(){
	int n=5;
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
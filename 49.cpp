#include<iostream>
using namespace std;
int main(){
//	TO print the following pattern:
//   00000
//	 11111
//	 22222
//	 33333
//	 44444

	int n=5;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
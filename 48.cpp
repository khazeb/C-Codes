#include<iostream>
using namespace std;
int main(){
//	TO print the following pattern:
//	 11111
//	 22222
//	 33333
//	 44444
//   55555
	int n=5;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	return 0;
}
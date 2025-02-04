//To print the following pattern:
//2
//4 4
//6 6 6
//8 8 8 8
//10 10 10 10 10
#include <iostream>
using namespace std;
int main(){
	int n=0; 
	for(int i=1;i<=5;i++){
		 
		for(int j=1;j<=i;j++){
	    cout << i * 2 <<" ";
		}
		 cout<<endl;
		
	}

 return 0;
}
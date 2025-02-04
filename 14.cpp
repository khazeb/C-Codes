//To print the following pattern:
//2
//2 4
//2 4 6
//2 4 6 8
//2 4 6 8 10

#include <iostream>
using namespace std;
int main(){
	int n=0; 
	for(int i=1;i<=5;i++){
		 
		for(int j=1;j<=i;j++){
	    cout << j * 2 <<" ";
		}
		 cout<<endl;
		
	}

 
 
 
 return 0;
}
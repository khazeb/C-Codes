//To print the following pattern:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5 
   
#include<iostream>
using namespace std;
int main(){
	 
	for(int i=5;i>=1;i--){
		 
		for(int j=5;j>=i;j--){
			cout<< i <<" ";
	        
		}
		cout<<endl;
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
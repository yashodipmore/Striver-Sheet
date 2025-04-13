// largest number in array

#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,3,5,7,4,7,8};
	int n = 7;
	
	int large = 0;
	
	for(int i = 0; i <n;i++){
		if(arr[i] > large){
			large = arr[i];
		}
	}
	int slarge = 0;
	for( int i = 0; i < n; i++){
		if(arr[i] < large){
			slarge = arr[i];
		}
	} 
	cout << slarge;
	return 0;
}
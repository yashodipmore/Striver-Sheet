// check it array is sorted 
#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(arr[i+1] >= arr[i]){
			
		}
		else{
			return false;
		}
	}
	return true;
}
int main(){
	
	int arr[] = {2,3,4,4,5,6,7,7};
	int n =8;
	cout << sorted(arr, n);
	return 0;
}
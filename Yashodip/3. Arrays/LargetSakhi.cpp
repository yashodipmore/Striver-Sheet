#include <bits/stdc++.h>
using namespace std;


void Largest(int arr[], int n){
	int large = 0;
	for(int i = 0 ; i<n; i++){
		if(arr[i] > large){
			large = arr[i];
		}
		
	}
	cout << large;
	
}
int main(){
	int arr[] = {3,4,6,9,2,5,8};
	int n = 7;
	Largest(arr,n);
}
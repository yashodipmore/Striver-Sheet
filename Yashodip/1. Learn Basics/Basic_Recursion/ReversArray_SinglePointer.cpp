#include <bits/stdc++.h>
using namespace std;

void ReverseF(int i, int arr[], int n){
	if(i >=(n/2)){
		return;
	}
	else{
		swap(arr[i], arr[n-i-1]);
		ReverseF(i+1, arr, n);
	}
}
int main(){
	int n;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i< n ; i++){
		cin >> arr[i];
	}
	
	ReverseF(0,arr,n);
		
	for(int i = 0; i <= n; i++){
		cout << arr[i];
	}
}
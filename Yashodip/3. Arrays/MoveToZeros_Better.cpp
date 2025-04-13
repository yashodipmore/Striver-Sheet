#include <bits/stdc++.h>
using namespace std;

void MoveZeros(int arr[], int n){
	int temp[n];
	for(int i = 0; i <n; i++){
		if(arr[i] != 0){
			temp[i] = arr[i];
		}
	}
	
	int nz = temp.size();
	for(int i = 0; i< nz;i++){
		arr[i] = temp[i];
	}
	for(int i = nz; i < n; i++){
		arr[i] = 0;
	}
}

int main(){
	
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i<n ; i++){
		cin >> arr[i];
	}
	MoveZeros(arr, n);
	for(int i = 0;i < n; i++){
		cout << arr[i];
	}
	
	return 0;
	
}
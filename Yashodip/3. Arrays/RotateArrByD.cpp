#include <bits/stdc++.h>
using namespace std;

void RotateByd(int arr[], int n, int d){
	
	d = d % n;
	
	int temp[d];
	for(int i = 0; i < n; i++){
		temp[i] = arr[i];
	}
	for(int i = d; i < n; i++){
		arr[i - d] = arr[i];
	}
	for(int i = n-d; i < n; i++){
		arr[i] = arr[i-(n-d)];
	}
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int d;
	cin >> d;
	RotateByd(arr, n, d);
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
}
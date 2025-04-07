#include <bits/stdc++.h>
using namespace std;

void Revers(int l,int arr[],int r){
	if(l >= r){
		return;
	}
	else{
		swap(arr[l],arr[r]);
		Revers(l+1,arr,r-1);
	}
}


int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i <= n; i++){
		cin >> arr[i];
	}
	Revers(0,arr,n);
		for(int i = 0; i <= n; i++){
		cout << arr[i];
	}
	return 0;
}
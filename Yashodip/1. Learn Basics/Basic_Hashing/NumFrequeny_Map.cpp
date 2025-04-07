#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	map<int, int> mpp;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		mpp[arr[i]]++;
	}
	
	
	int q;
	cin >> q;
	for(int i = 0;i<n; i++){
		int num;
		cin >> num;
		cout << mpp[num] <<	endl;
	}
	return 0;
}
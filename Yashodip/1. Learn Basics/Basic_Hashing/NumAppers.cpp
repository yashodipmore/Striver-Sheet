#include <bits/stdc++.h>
using namespace std;

int PrintNumAppears(int n, int arr[]){
	int cnt = 0;
	int n[] = arr[n].size();
	for(int i = 0; i < n;i++){
		if(arr[i] == n){
			cnt = cnt +1;
		}
	}
	return cnt;
}
int main(){
	
	int arr[] = {1,2,3,1,3,4};
	int n = 3;
	cout << PrintNumAppears(n, arr);
	return 0;
}
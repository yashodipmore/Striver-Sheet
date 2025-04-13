#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,1,2,2,3,3,4,4};
	int n = 8;
	
	set<int> st;
	for(int i= 0; i < n; i++){
		st.insert(arr[i]);
	}
	
	int ind = 0;
	for(auto it : st){
		arr[ind] = it;
		ind++;
	}
	return 0;
}
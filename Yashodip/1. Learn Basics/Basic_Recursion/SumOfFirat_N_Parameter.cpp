#include <bits/stdc++.h>
using namespace std;

void fun(int i, int sum){
	if(i < 1){
	    cout << sum;
	    return;
	}
	else{
		fun(i-1,sum+i);
	}
}

int main(){
	int n;
	cin >> n;
	fun(n,0);
	return 0;
}
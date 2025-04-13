//count dgt

#include <bits/stdc++.h>
using namespace std;

int CountNum(int n){
	int cnt = 0;
	while(n >0){
		int last = n % 10;
		cnt = cnt + 1;
		n =  n/10;
	}
	
	return cnt;
}
int main(){
	int n;
	cin >> n;
	cout << CountNum(n);
	return 0;
}
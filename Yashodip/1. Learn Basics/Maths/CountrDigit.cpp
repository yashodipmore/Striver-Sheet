#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	int count = 0;
	
	while (N > 0){
		int lastd = N % 10;
		count++;
		N = N/10;
	}
	
	cout << count;
	return 0;
}
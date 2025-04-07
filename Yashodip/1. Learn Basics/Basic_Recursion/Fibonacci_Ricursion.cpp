#include <bits/stdc++.h>
using namespace std;

int Fibo(int n){
	if(n <=1){
		return n;
	}
	int last = Fibo(n-1);
	int Slast = Fibo(n-2);
	return last + Slast;
}
int main(){
	int n;
	cin >> n;
	cout << Fibo(n);
	return 0;
}
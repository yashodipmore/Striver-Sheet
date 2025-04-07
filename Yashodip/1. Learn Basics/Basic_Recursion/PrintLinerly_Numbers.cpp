#include<bits/stdc++.h>
using namespace std;

void fun(int i,int N){
	if(i>N){
		return;
	}
	else{
		cout << i << endl;
		fun(i+1,N);
	}
}



int main(){
	int N;
	cin >> N;
	fun(1,N);
}
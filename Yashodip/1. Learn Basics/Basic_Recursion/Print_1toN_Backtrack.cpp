#include<bits/stdc++.h>
using namespace std;

void fun(int i,int N){
	if(i>N){
		return;
	}
	else{
		fun(i+1,N);
		cout << i << endl;
		
	}
}



int main(){
	int N;
	cin >> N;
	fun(1,N);
}
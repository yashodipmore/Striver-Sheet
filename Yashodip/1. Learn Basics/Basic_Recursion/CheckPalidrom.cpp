#include <bits/stdc++.h>
using namespace std;

bool Palidrom(int i , string &s){
	if(i >= s.size()/2) return true;
	if(s[i] != s[s.size()-i-1]) return false;
	return Palidrom(i+1,s);
	
}
int main(){
     string s = "madam";
    cout << Palidrom(0,s);
    return 0; 
}
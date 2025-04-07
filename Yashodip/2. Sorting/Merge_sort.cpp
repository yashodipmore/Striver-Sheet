#include <bits/stdc++.h>
using namespace std;

void mergSort(int arr[], int low, int high){
	if(low >= high) return;
	int mid = (low+high)/2;
	mergSort(arr,low,mid);
	mergSort(arr,mid+1,high);
	mergSort(arr,low,mid,high);
}
int main(){
	int arr[] = {3,2,4,1,3};
	int low = arr[0];
	int high = arr[4];
	mergSort(arr, low , high)
}
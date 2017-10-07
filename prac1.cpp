#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

void twoDish();
void fillArray();

int main(){
	int test=0;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		twoDish();
	}
	return 0;
}
void fillArray(int arr[], int m){
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	return;
}

void twoDish(){
	int m1,m2;
	cin>>m1;
	int arr1[m1];
	fillArray(arr1,m1);
	sort(arr1,arr1+m1);
	cin>>m2;
	int arr2[m2];
	fillArray(arr2,m2);
	sort(arr2,arr2+m2);
	if(abs(arr2[m2-1]- arr1[0]) > abs(arr2[0]-arr1[m1-1])){
		cout<<abs(arr2[m2-1]- arr1[0])<<endl;
	} else {
		cout<<abs(arr2[0]-arr1[m1-1])<<endl;
	}
	return;
}

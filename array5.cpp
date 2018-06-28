/*
MAXIMUM SUB INCREASING SUB SEQUENCE
https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence/0*/
 
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n], i,j, max_sum=0, cur_sum=0, arr1[n], arr2[n];
		for(i=0;i<n;i++) {
			cin>>arr[i];
			arr1[i] = arr[i];
			arr2[i] = i;
		}
		for(j=1;j<n;j++) {
			for(i=0;i<j;i++) {
				if(arr[i] < arr[j]) {
					cur_sum = arr1[i] + arr[j];
					if(cur_sum > arr1[j]) {
						arr1[j] = cur_sum;
//						cout<<i<<":"<<j<<"-"<<cur_sum<<endl;
					}
				}
			}
		}
/*		for(i=0;i<n;i++) {
			cout<<arr1[i]<<" ";
		}
		cout<<endl;*/
		cout<<*max_element(arr1, arr1+n)<<endl;
	}
	return 0;
}

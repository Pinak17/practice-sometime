/*
SORT ARRAY CONTAINING 0'S, 1'S, 2'S
DUTCH NATIONAL FLAG PROBLEM
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0/?ref=self
*/
 
#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n],arr1[3]={0};
		for(int i = 0;i<n;i++) {
			cin>>arr[i];
			arr1[arr[i]]++;
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<arr1[i];j++) {
				cout<<i<<" ";
			}
//			cout<<arr1[i]<<endl;
		}
	cout<<endl;
	}
	return 0;
}
		

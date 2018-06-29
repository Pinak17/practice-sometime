/*
MAXIMUM OF ALL SUB ARRAY OF SIZE k
https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k,i;
		cin>>n>>k;
		int arr[n];
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		for(i=0;i<=n-k;i++) {
			cout<<*max_element(arr+i, arr+i+k)<<" ";
		}	
		cout<<endl;
	}
	return 0;
}

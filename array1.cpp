/*
MISSING NUMBER
https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
*/

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,i,sum = 0;
		cin>>n;
		int arr[n];
		for(i=0;i<n-1;i++) {
			cin>>arr[i];
			sum = sum + arr[i];
		}
		cout<<(((n*(n+1))/2) - sum)<<endl;
	}
	return 0;
}

/*
CHOCOLATE DISTRIBUTION PROBLEM
https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i;
		cin>>n;
		int arr[n], min_dif = 999, m, dif;
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		cin>>m;
		sort(arr, arr+n);
		for(i=0;i<n-m+1;i++) {
			//cout<<arr[i]<<endl; 
			dif = arr[i+m-1] - arr[i];// cout<<"dif->"<<dif<<endl; }
			if(dif < min_dif)
				min_dif = dif;
		}
		cout<<min_dif<<endl;

	}
	return 0;
}

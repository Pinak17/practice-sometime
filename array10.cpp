/*
TRAPPING RAIN WATER PROBLEM
https://practice.geeksforgeeks.org/problems/trapping-rain-water/0
*/

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i;
		cin>>n;
		int arr[n], l, r, max_left = 0, max_right = 0, ans = 0;
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		//cout<<"A"<<endl;
		l=0;r=n-1;
		while(l<r) {
			if(arr[l] > arr[r]) {
				if(arr[r] >= max_right) {
					max_right = arr[r];
				} else {
					ans = ans + (max_right - arr[r]);
				}	
				r--;
			} else {
				if(arr[l] >= max_left) {
					max_left = arr[l];
				} else {
					ans = ans + (max_left - arr[l]);
				}
				l++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

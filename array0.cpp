/*
KADANE ALGORITHM
https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--) {
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		int max_so_far = INT_MIN;
		int max_ending_here = 0;
		int max_element = INT_MIN;
		for(i=0;i<n;i++) {
			max_ending_here = max(max_ending_here + arr[i], 0);
			max_so_far = max(max_so_far, max_ending_here);
			max_element = max(max_element, arr[i]);
		}
		if (max_so_far == 0)
			max_so_far = max_element;
		cout<<max_so_far<<endl;
//		cout<<max_element<<endl;
	}
	return 0;
}

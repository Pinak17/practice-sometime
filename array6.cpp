/*
LEADERS IN A ARRAY
https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/?ref=self
*/

#include <iostream>
#include <bits/stdc++.h>
#include <list>
#include <iterator>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int arr[n], i;
		int max = INT_MIN;
		list<int> li1;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		for(i=n-1;i>=0;i--) {
			if(arr[i] > max) {
				max = arr[i];
				li1.push_front(max);
			}
		}
		for(list<int>::iterator it = li1.begin(); it!=li1.end(); it++) {
			cout<<*it<<" ";
		}
		cout<<endl;
	}
	return 0;
}

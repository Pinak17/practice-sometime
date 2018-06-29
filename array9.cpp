/*
K SMALLEST ELEMENT
https://practice.geeksforgeeks.org/problems/kth-smallest-element/0/?ref=self
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		priority_queue<int, vector<int>, greater<int> > pq;
		int n,k,i,in;
		cin>>n;
		for(i=0;i<n;i++) {
			cin>>in;
			pq.push(in);
		}
		cin>>k;
		i = 1;
		while(i<k) {
			/*if(i==k) {
				cout<<pq.top()<<endl;
				break;
			}*/
			pq.pop();
			i++;
		}
		cout<<pq.top()<<endl;
	}
	return 0;
}

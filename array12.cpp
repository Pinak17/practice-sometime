/*
PYTHAGPREAN TRIPLET
https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
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
		int arr[n], tmp;
		for(i=0;i<n;i++) {
			cin>>tmp;
			arr[i] = tmp*tmp;
		}
		sort(arr, arr + n, greater<int>());
		int l, r, flag = 0;
		for(i=0;i<n-2;i++) {
			l = i+1; r = n-1;
			while(l<r) {
				if(arr[i] == arr[l] + arr[r]) {
					flag = 1;
					break;
				} else if (arr[i] > arr[l] + arr[r]) {
					r--;
				} else if (arr[i] < arr[l] + arr[r]) {
					l++;
				}
			}
			if (flag)
				break;
		}
		if (flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}

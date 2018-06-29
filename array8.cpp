/*
REVERSE ARRAY IN GROUP
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0/?ref=self
*/

#include <iostream>

using namespace std;

void reverse(int*, int, int);

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, k, i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++) {
			cin>>arr[i];
		}
		cin>>k;
		for(i=0;i<n-k+1;i+=k) {
			reverse(arr,i,i+k-1);
		}
		/*if(n%k != 0) {
			
		}*/
		reverse(arr, i, n-1);
		for(i=0;i<n;i++)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}

void reverse(int *arr, int i, int k) {
	//cout<<i<<endl;
	for(int j=i;j<=(i+k)/2;j++) {
	//	cout<<"j->"<<j<<endl;
		int tmp = arr[j];
		arr[j] = arr[k-(j-i)];
		arr[k-(j-i)] = tmp;
	}
	return;
}

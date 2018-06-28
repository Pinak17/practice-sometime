/*
EQILIBRIUM POINT
https://practice.geeksforgeeks.org/problems/equilibrium-point/0
*/

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, sum_l = 0, sum_r=0, i;
		cin>>n;
		int arr[n], flag=0;
		for(i=0;i<n;i++) {
			cin>>arr[i];
			sum_r = sum_r + arr[i];
		}
		sum_r = sum_r - arr[0];
		for(i=0;i<n;i++) {
			if(sum_l == sum_r){
				cout<<i+1<<endl;
				flag = 1;
				break;
			} else {
				sum_l = sum_l + arr[i];
				sum_r = sum_r - arr[i+1];
			}
		}
		if(!flag)
			cout<<"-1"<<endl;	
	}
	return 0;
}

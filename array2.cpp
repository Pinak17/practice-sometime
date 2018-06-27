/*
SUB-ARRAY WITH GIVEN SUM
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0/?ref=self
*/

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i, sum;
		cin>>n>>sum;
		int arr[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		int i_ind = 0;
		int f_ind = 0;
		int c_sum = arr[0];i=1;
		int flag = 0;
		while(i<=n) {
			//cout<<c_sum<<" "<<i_ind+1<<"->"<<f_ind+1<<":"<<i<<endl;
			if (c_sum < sum) {
				c_sum = c_sum + arr[i];
				f_ind = i;
				i++;
			} else if (c_sum > sum) {
				c_sum = c_sum - arr[i_ind];
				i_ind = i_ind+1;
			} else if(sum == c_sum) {
                                cout<<i_ind + 1<<" "<<f_ind + 1<<endl;
                              	flag = 1;
				break;
                        }
//			cout<<c_sum<<" "<<i_ind+1<<"->"<<f_ind+1<<":"<<i<<endl;
		}
		if(flag == 0)
			cout<<"-1"<<endl;
	}
	return 0;
}

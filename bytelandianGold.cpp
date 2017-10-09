#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int byte(vector<long long int> &dp , long long int n);
int main(){
	long long int n,ans;
	vector<long long int> dp (1000000,0);
	while(cin>>n){
		ans=byte(dp,n);
		cout<<ans<<endl;
	}
	return 0;
}

long long int byte(vector<long long int> &dp, long long int n){
	if(n<10){
		return n;
	}
	if(n<1000000){
		if(dp[n]){
			return dp[n];
		} else {
			long long int x=byte(dp,n/2)+byte(dp,n/3)+byte(dp,n/4);
			dp[n]=max(n,x);
			return dp[n];
		}
	}
	long long int x=byte(dp,n/2)+byte(dp,n/3)+byte(dp,n/4);
	return max(n,x);
}


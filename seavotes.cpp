//https://ideone.com/DtkObn(not working ?)

#include <iostream>
using namespace std;

int main() {

	int t,n;
	cin>>t;
	int arr[n];

	while(t--){
	    cin>>n;
	    long long int sum=0,count=0;
	    for(int i=0;i<n;i++)
	    {
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i]>0)
		  count++;
	    }
	    
	   sum=sum-100;
	   if(sum>=0 && sum<count)
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;	     
	}
	return 0;
}
     

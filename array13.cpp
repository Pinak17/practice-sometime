#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, i;
		cin>>n;
		int arr[n], l=0, r=1, flag=0, loop=0;
		for(i=0;i<n;i++) 
			cin>>arr[i];
		while(r<n){
			/*if(r == n-1 && loop != 0){
            	cout<<"("<<r-loop-1<<" "<<r<<") ";
            	flag=1; break;
            }*/

			if(arr[r] > arr[l]) {
				loop++;
				r++;l++;
			} else {
				if(loop > 0) {
					cout<<"("<<r-loop-1<<" "<<r-1<<") ";
					flag = 1;
				} else {
					l=r;
					r++;
				}
				loop=0;
			}
			if(r == n && loop != 0){
        		cout<<"("<<r-loop-1<<" "<<r-1<<") ";
            	flag=1; break;
	         }

			//cout<<loop<<endl;
		}
		if(!flag)
			cout<<"No Profit";
		cout<<endl;
	}
	return 0;
}

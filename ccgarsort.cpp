/*

https://www.careercup.com/question?id=5201559730257920
Done with vector

*/

#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>

using namespace std;

void fillVector(vector<int> &arr, int n);
void ssort(vector<int> &arr, int n);
 
int main() {
	int n;
	cin>>n;
	vector<int> arr;
	fillVector(arr,n);
	ssort(arr,n);
	for(int a=0; a<n;a++ ) {
		cout<<arr[a]<<" ";
	}
	cout<<endl;
	return 0;
}

void fillVector(vector<int> &arr, int n) {
	int x;
	for(int a=0; a<n;a++) {
		cin>>x;
		arr.push_back(x);
	}
	return;
}

void ssort(vector<int> &arr, int n) {
	int i=0,j=0;
	for(i=0;i<n;i++) {
		if(arr[i] < 0) {
			arr.insert(arr.begin()+j, arr[i]);
			arr.erase(arr.begin()+i+1);
			j++;
		}
	}
	return;
}

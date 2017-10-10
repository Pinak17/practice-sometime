#include <iostream>
#include <cstring>

using namespace std;

void reset(int*, int);
void tweetClose(int*, int);
void changeTweet(int*, int, int);
void printArray(int*, int);

int main(){
	int n,k;
//	string tmp;
	cin>>n>>k;
        int arr[n];
	reset(arr,n);
//	cin>>tmp;
	while(k--){
	//	cout<<"Hekk"<<endl;
		tweetClose(arr,n);
	}
	return 0;
}

void tweetClose(int arr[], int n){
	string check="CLICK";
	string s;
	int num;
	cin>>s;
	if(s == check){
		cin>>num;
		changeTweet(arr,n,num-1);
	}else{
		reset(arr,n);
	}
	printArray(arr,n);
	return;
}

void reset(int arr[], int n){
	for(int i=0;i<n;i++){
		arr[i]=0;
	}
	return;
}

void changeTweet(int arr[], int n, int num){
	if(arr[num] == 0){
		arr[num]=1;
	}else{
		arr[num]=0;
	}
	return;
}

void printArray(int arr[], int n){
	int i=0;
	for(int j=0;j<n;j++){
		if(arr[j] != 0){
			i++;
		}
	}
	cout<<i<<endl;
	return;
}

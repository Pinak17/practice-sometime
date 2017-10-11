#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void nextPalin();
void makePalin(string, string, int, int);
int check(string);
void zeroCon(string);
void nineCon(string);

int main(){
	int test=0;
	cin>>test;
	while(test--){
		nextPalin();
	}
	return 0;
}

void nextPalin(){
	string s,k;
	cin>>s;
	k=s;
	int len = k.length();
	int mid = ceil(double(len)/2);
	for(int i=0;i<mid-1;i++){
		k[len-1-i]=k[i];
	}
	int flag=check(k);
	if(flag == 0){
                zeroCon(k);
                return;
        }else if(flag == 9){
                nineCon(k);
                return;
        }
	makePalin(k,s,mid,len);
	return;
}

void makePalin(string k, string s, int mid, int len){
	if(k[mid-1] == k[len-mid] && stoi(k)>stoi(s)){
		cout<<k<<endl;
		return;
	}
	if(k[mid-1]>k[len-mid]){
		k[len-mid]=k[mid-1];
		cout<<k<<endl;
		return;
	}else{
		int tmp=k[mid-1];
		k[mid-1]=tmp+1;
		k[len-mid]=k[mid-1];
		cout<<k<<endl;
		return;
	}	
	return;
}

int check(string k){
	int flag=1;
	int l=k.length();
	for(int i=0;i<l;i++){
		if(k[i] != '0'){
			break;
		}
		if(i==l-1){
			flag=0;
		}
	}
	for(int i=0;i<l;i++){
                if(k[i] != '9'){
                        break;
                }
                if(i==l-1){
                        flag=9;
                }
        }
	return flag;
}

void zeroCon(string k){
	cout<<"1"<<endl;
	return;
}

void nineCon(string k){
	int l=k.length();
	cout<<"1";
	for(int i=1;i<l;i++){
		cout<<"0";
	}
	cout<<"1"<<endl;
	return;
}
	

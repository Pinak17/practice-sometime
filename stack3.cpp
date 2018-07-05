/*
IMPLEMENT STACK TO GET MIN IN O(1) AND N(1)
https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1
*/	

#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){
       int qt;
       cin>>qt;
       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin()
{
   //Your code here
   if(s.empty()){
       return -1;
   }
//	cout<<"grtmin"<<minEle<<"+";
   return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   int k;
   if(s.empty()) {
       return -1;
   }
   int y = s.top();
   s.pop();
   if(y >= minEle) {
       return y;
   } else {
       k = minEle;
       minEle = (2*minEle - y);
       return k;
   }
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   if(s.empty()) {
       s.push(x);
       minEle = x;
	return;
   } else {
       if(x >= minEle) {
           s.push(x);
//	   cout<<"minp"<<minEle;
       } else {
           s.push(2*x-minEle);
           minEle = x;
       }
   }
}

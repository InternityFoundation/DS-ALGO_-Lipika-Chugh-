Linl-https://practice.geeksforgeeks.org/problems/fill-array-by-1s/0

Problem statement-Given an array of 0 and 1. In how many iterations it is possible that the whole array can be filled with 1's, if in a single iteration immediate neighbours of 1's can be filled.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int f=0;
	    int c=0;
	    int res=0;
	    for(int i=0;i<n;){
	        if(a[i]==1){
	            f=1;
	        }
	        while(i<n && a[i]==1){
	            i++;
	        }
	        while(i<n && a[i]==0){
	            c=c+1;
	            i++;
	        }
	        int curr_count;
	        if(f==0 && i==n){
	            cout<<"-1"<<endl;
	            break;
	        }
	        if(f==1 && i<n){
	        
	        if(c%2==0){
	            curr_count=c/2;
	        }
	        else{
	            curr_count=(c+1)/2;
	        }
	        c=0;
	        }
	        else{
	            curr_count=c;
	            c=0;
	        }
	        
	        res=max(res,curr_count);
	    }
	    if(f!=0)
	    cout<<res<<endl;
	}
	return 0;
}

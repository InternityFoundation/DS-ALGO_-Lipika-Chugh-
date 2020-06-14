Linl-https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

Problem statement-Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.

#include <bits/stdc++.h>
using namespace std;

int smallest(int A[],int n,int k){
    sort(A,A+n);
    return A[k-1];
    
}


int main() {
    int t;
    cin>>t;
    while(t--){
        
    int n;
    cin>>n;

    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
          }
          int k;
          cin>>k;
          cout<<smallest(A,n,k)<<endl;
          
    }
	return 0;
}

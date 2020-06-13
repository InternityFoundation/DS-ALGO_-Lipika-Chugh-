Link-https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0

Problem Statement-Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. Also, the rightmost element is always a leader. 

#include <iostream>
#include<vector>
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
	    vector<int>v;
	    int max=a[n-1];
	    v.push_back(max);
	    for(int i=n-2;i>=0;i--){
	        if(max<=a[i]){
	            max=a[i];
	            v.push_back(max);
	        }
	    }
	    for(int i=v.size()-1;i>=0;i--){
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

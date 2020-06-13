Link-https://practice.geeksforgeeks.org/problems/product-array-puzzle/0

Problem statement-Given an array A of size N, construct a Product Array P (of same size) such that P is equal to the product of all the elements of A except A[i].

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int p[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        int s=1;
	        for(int j=0;j<n;j++){
	            if(i==j){
	                ;
	            }
	            else{
	                s=s*a[j];
	            }
	        }
	        p[i]=s;
	    }
	    for(int i=0;i<n;i++){
	        cout<<p[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

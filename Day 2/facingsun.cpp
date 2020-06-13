Link-https://practice.geeksforgeeks.org/problems/facing-the-sun/0

Problem Statement-Monu lives in a society which is having high rise buildings. This is the time of sunrise and monu wants see the buildings receiving the sunlight. Help him in counting the number of buildings recieving the sunlight.
Given an array H representing heights of buildings. You have to count the buildings which will see the sunrise (Assume : Sun rise on the side of array starting point).

 #include <iostream>
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
	    int p=1;
	    int d;
	    int max=a[0];
	    for(int i=1;i<n;i++){
	        if(max<a[i]){
	            p++;
	            max=a[i];
	        }
	        
	        
	        /*d=0;
	        for(int j=i-1;j>=0;j--){
	            if(a[i]<a[j]){
	                d=1;
	                break;
	            }
	            }
	            if(d==0){
	                p++;
	            }
	        */
	    }
	    cout<<p<<endl;
	}
	return 0;
}

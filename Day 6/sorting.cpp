Link-https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

Problem statement-Given an array of size N containing 0s, 1s, and 2s; sort the array in ascending order.

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort012(int a[], int n){
sort(a,a+n);}
/*{
    // coode here 
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
               // cout<<a[j];
            }
            
        }
    }*/

   // return 0;
   }

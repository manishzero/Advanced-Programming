#include<stdio.h>
void constant(int n){
    int arr[5];
        printf("The constant space required for %d size is %d bytes\n",5,5*sizeof(arr[5]));
}
void lin(int n){
    int crr[n];
    printf("The linear space required for %d size is %d bytes\n",n,n*sizeof(crr[n]));
}
void quad(int n){
        int brr[n][n];
    printf("The quadratic space required for %d size is %d bytes\n",n,n*sizeof(brr[n]));
}

int main(){
    int size;
    printf("Enter the size of input\n");
    scanf("%d",&size);
    int arr[2];
    // for O(1) sc
    constant(size);
    //for o(n) sc
    lin(size);
    // for o(n^2) sc
    quad(size);
   
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int mi(int a[],int n,int s,int l){
    int mid=s+(l-s)/2;
    if(a[mid]<a[mid+1] && a[mid]>a[mid-1]){
        return mi(a,n,s,mid-1);
    }
    else if(a[mid]>a[mid+1]){
        return mid+1;
    }
    else if(a[mid]<a[mid-1]){
        return mid-1;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m=mi(a,n,0,n-1);
    printf("%d",m);
}

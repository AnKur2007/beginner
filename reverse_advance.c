#include<stdio.h>
void reverse(int a[],int n,int k){
    for(int i=0;i<n;i=i+k){
        int left=i;
        int right;
        if(i+k-1<n-1){
            right=i+k-1;
        }
        else
        right=n-1;
        while(left<right){
            int temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void print_sort(int a[], int n)
{
   for (int i = 0; i < n; i++){
       printf("%d ", a[i]);
   }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    reverse(a,n,k);
}
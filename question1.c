#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    int r=n;
    for(int i=0;i<n;i++){
        printf("%d\n",r);
        int count=1;
        while(i<n-1 && a[i]==a[i+1]){
            count++;
            i++;
        }
        r=r-count;
    }
}
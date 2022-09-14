#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int min(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]==0){
            break;
        }
        else if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    for(int i=0;i<n;i++){
        int m=min(a,n);
        printf("%d",m);
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==0){
                break;
            }
            else{
                a[j]=a[j]-m;
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
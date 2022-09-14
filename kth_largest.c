#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        int max=i;
        for(int j=i+1;i<n;j++){
            if(a[max]<a[j]){
                max=j;
            }
            int temp=a[max];
            a[max]=a[i];
            a[i]=temp;
        }
        printf("%d",a[k]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0;
    for(int i=1;i<n;i++){
        if(a[l]<a[i]){
            l=i;
        }
    }
    int res=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[l]){
            if(res==-1){
                res=i;
            }
            else if(a[res]<a[i]){
                res=i;
            }
        }
    }
    printf("%d",a[res]);
}
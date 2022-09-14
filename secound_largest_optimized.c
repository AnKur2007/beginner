#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int res=-1,l=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[l]){
            res=l;
            l=i;
        }
        else if(a[i]!=a[l]){
            if(res==-1 || a[i]>a[res]){
                res=i;
            }
        }
    }
    printf("%d",a[res]);
    return 0;
}
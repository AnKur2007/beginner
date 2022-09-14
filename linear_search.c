#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d\t",&a[i]);
    }
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("%d\n",i);
        }
    }
    return 0;
}
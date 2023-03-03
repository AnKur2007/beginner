#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
 
    // find the max frequency using linear traversal
    int max_count = 1, res = a[0], curr_count = 1;
     for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1])
            curr_count++;
        else
            curr_count = 1;
       
        if (curr_count > max_count) {
            max_count = curr_count;
            res = i - 1;
        }
    }
    printf("%d",res);
  }
}
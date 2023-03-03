#include<stdio.h>
#include<string.h>
int strcmp(const char* str1,const char* str2){
    while(*str1){
        if(*str1!=*str2)
        break;
        str1++;
        str2++;
    }
    int i=*str1-*str2;
    return i;
}
int main(){
    char s1[]="Coding";
    char s2[]="Coding";
    printf("%d\n",strcmp(s1,s2));
}
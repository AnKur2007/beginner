#include<stdio.h>
int main()
{
 int x=30, *y, *z;
 y=&x;     /* Assume address of x is 1000 and integer is 4 byte size */
 printf("%d ",y);
 z=y;
 *y++=*z++;
 x++;
 printf("%d %d %d",x,y,z);
 return 0;
}
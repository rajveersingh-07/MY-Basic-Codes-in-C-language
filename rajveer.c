#include <stdio.h>
int main() 
{ int a=10, b=30, c;
  printf("before swapping %d %d\n",a,b);
  c=a;a=b;b=c;
  printf("after swapping %d %d\n",a,b);
  return 0;
}
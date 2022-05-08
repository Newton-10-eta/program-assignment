//// program to find the cube of numbers up to given integer
#include<stdio.h>
int main()
{
    int n,cube,i ;
    printf("enter the numbers\n");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
      cube=i *i *i;
      printf("\nnumber is: %d and the cube %d is:%d\n",i,i,cube);
    }
    return 0;

}

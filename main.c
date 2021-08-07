
#include<stdio.h>
#include<stdlib.h>
int n1 = 0, n2 = 1, n3;
int fibonacci(int);
void main()
{
    int n;
    printf("Enter the limit: \n");
    scanf("%d", &n);
    fibonacci(n);
}
int fibonacci(int a)
{
    if(a>0)
    {
        n3 = n1+n2;
        printf("%d ", n1);
        n1 = n2;
        n2 = n3;
        fibonacci(a-1);
    }
}

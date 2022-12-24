/*Author : Alomgir
ID: 2022-1-6-125
date: 23 April,2022 */

#include<stdio.h>
#define N 10
int main(void)
{
    int a[N], *p;
    printf("Enter %d numbers: ",N);
    for(p=a; p<a+N; p++)
        scanf("%d",p);

    printf("In reverse order: ");
    for(p=a+N-1; p>=a; p--)
        printf(" %d",*p);
    printf("\n");
    return 0;
}

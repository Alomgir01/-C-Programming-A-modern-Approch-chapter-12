/*Author : Alomgir
ID: 2022-1-6-125
date: 23 April,2022 */

#include<stdio.h>
#define N 10
int main(void)
{
    int a[N],sum=0,i, *p=a;
    printf("Enter array elements: ");
    for(i=0; i<N; i++)
        scanf("%d",&a[i]);
    p = a;
    for(i=0; i<N; i++)
    {
        sum = sum + *(p+i);
        p[i]++;
    }
    printf("The sum is: %d",sum);
}

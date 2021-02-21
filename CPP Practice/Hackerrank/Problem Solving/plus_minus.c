#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int i;

// Complete the plusMinus function below.
void plusMinus(int arr_count, int* arr) {
    float p=0,n=0,z=0;
for(i=0;i<arr_count;i++)
{
    if(*(arr+i)>0) p++;
    else if(*(arr+i)<0) n++;
    else if(*(arr+i)==0) z++;
}
printf("%.6f\n",p/arr_count);
printf("%.6f\n",n/arr_count);
printf("%.6f",z/arr_count);

}

int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    plusMinus(n,a);
}

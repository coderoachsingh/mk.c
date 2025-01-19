#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, arr[200], i;
scanf("%d", &n);

for(i = 0; i <n; i++)
{
printf("\ninput values for array:");
scanf("%d",&arr[i]);
}
printf("our array is\n:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}

printf("\nour reversed array is:");
for(i=0;i<n;i++)
{
printf("%d",arr[n-i-1]);
}
return 0;
}


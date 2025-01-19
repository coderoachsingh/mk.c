#include<stdio.h>
int main()
{

int n,i,j=0,len;
scanf("%d", &n);
len=2*n-1;
for(i=0;i<=(len);i++)
{
printf("\n");
while(j<i)
{
printf("%d",(n-j));
j++;
}
while(j>i && j<len-i)
{
printf("%d",n-i);
j++;

}
while(j>(len-i)&&j<=(len))
{
printf("%d",n-len+j+1);

j++;


}
j=0;
}
return 0;
}

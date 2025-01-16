#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    int i,j,t;
    double ar,p,arr[2000];
	for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2;
        ar=(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        arr[i]=ar;   
    }
    for(i=0;i<(n-1);i++)
    for(j=i+1;j<n;j++)
    { 
      if(arr[i]>arr[j])
      {
        t=tr[i].a;
        tr[i].a=tr[j].a;
        tr[j].a=t;
        
        t=tr[i].b;
        tr[i].b=tr[j].b;
        tr[j].b=t;
         
        t=tr[i].c;
        tr[i].c=tr[j].c;
        tr[j].c=t;
      }  
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

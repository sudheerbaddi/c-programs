#include<stdio.h>
int main()
{ 
     int p,t;
     float r,i;
	printf("enter the value of p:");
       scanf("%d",&p);
       printf("enter the value of t:");
       scanf("%d",&t);
       printf("enter the value of r:");
       scanf("%f",&r);
       i=p*t*r/100;
       printf("intrest=%f",i);
	return 0;
}

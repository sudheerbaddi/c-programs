#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,tot;
	float avg;
	char grd,res;
	printf("enterthe value of s1:");
	scanf("%d",&s1);
	printf("enterthe value of s2:");
	scanf("%d",&s2);
	printf("enterthe value of s3:");
	scanf("%d",&s3);
	printf("enterthe value of s4:");
	scanf("%d",&s4);
	printf("enterthe value of s5:");
	scanf("%d",&s5);
	tot=s1+s2+s3+s4+s5;
	avg=tot/5;
	if (avg>=70)
	   grd='A';
	else if(avg>=60)
	       grd='B';
	     else if(avg>=50)
                   grd='C';
                 else if(avg>=40)
                        grd='D';
                      else grd='F';
	if((s1>35)&&(s2>35)&&(s3>35)&&(s4>35)&&(s5>35))
         res='p';
	else
	{
	  res='F';
	  grd='F';
	}
	printf("total=%d",tot);
	printf("\naverage=%f",avg);
	printf("\ngrade=%c",grd);
	printf("\nresult=%c",res);
	return 0;	 
	
}

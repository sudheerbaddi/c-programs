 #include<stdio.h>
int main()
{ 
       int a,b,c;
     printf("value of a:");
     scanf("%d",&a);
     printf("value of b:");
     scanf("%d",&b);
     printf("value of c:");
     scanf("%d",&c);
       if(a>b)
          if (a>c)
          printf("a is big=%d",a); 
       else 
	   printf("c is big=%d",c);
	else if (b>c)
		  printf("b is big=%d,b");
	      else 
	         printf("c is big= %d",c);	  	      
	return 0;
}

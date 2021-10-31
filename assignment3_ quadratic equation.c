#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void) //start of program
{
	float a, b, c;//float for equation.
	float ans=0;//for 0 in the equation.
	float d = 0;//a variable to help identify what to print out.
	int i;
//body 1, scan for a, b, c// 
	do//a loop to make sure input of a != 0.
	{
	printf("Solving roots for equation a*X**2+b*X+c = 0.\n");
	printf("Please enter three coefficients a, b, and c:");
	scanf("%f %f %f", &a, &b, &c);
		if(a==0)//give a warning if a=0
		{
			printf("\n");
			printf("INVALID!!! a cannot be 0");
			printf("\n\n");
		}
		if(scanf("%f %f %f", &a, &b, &c)!=1)
		{
			printf("INVALID");
		 } 
	}while(a==0);//scanf until a!=0.
	
//body 2, identify i//
	//first let's assume b**2 - 4*a*c = d.
	if(fabs((pow(b,2)-4*a*c))<0.000001)//if d=0, there will only be one root.
	{
		printf("The multiple real root of equation ");
		i=1;//identifier.
	}
	if((pow(b,2)-4*a*c)>0)//if d>0, there will be two different real roots.
	{
		printf("The real roots of equation ");
		i=2;//identifier.
	}
	if((pow(b,2)-4*a*c)<0)//if d<0, there will be two different complex roots.
	{
		printf("The complex roots of equation ");
		i=3;//identifier.
	}
//body 3, check for a, b, c, and print the equation//
	//check a//
	if(a==1)//check if a = 1
	{
		printf("X**2");
	}
	else if(a==-1)//if a = -1
	{
		printf("-X**2");
	}
	else //there will only be float that's not +1 -1 or 0(0 will not be accept during scanf procedure)
	{
		printf("%.4fX**2", a);
	}
	//check b//
	if(b==1)//this is similar to the loop check a.
	{
		printf("+X");
	}
	else if(b==-1)
	{
		printf("-X");
	}
	else if(b>0)
	{
		printf("+%.4fX", b);
	}
	else if(b<0)
	{
		printf("%.4fX", b);
	}
	//check c//
	if(c!=0)
	{
		if(c>0)
		{
			printf("+%.4f", c);
		}
		if(c<0)
		{
			printf("%.4f", c);
		}
	}
	//use the identifier i from body 2 to decide what to print.
	if(i==1)//if identified as multiple real roo.
	{
		printf("=%.4f is %.4f.", ans,-b/(2*a));
	}
	if(i==2)//if identified as real roots.
	{
		printf("=%.4f are %.4f and %.4f.", ans, (-b+sqrt(fabs((pow(b,2)-(4*a*c)))))/(2*a), (-b-sqrt(fabs((pow(b,2)-(4*a*c)))))/(2*a));
	}
	if(i==3)//if identified as complex roots.
	{
		printf("=%.4f are %.4f+%.4fi and %.4f-%.4fi", ans, -b/(2*a), sqrt(fabs((pow(b,2)-(4*a*c))))/(2*a), -b/(2*a), sqrt(fabs((pow(b,2)-(4*a*c))))/(2*a));
	}
  return 0;//end.
}

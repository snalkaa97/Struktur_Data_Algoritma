#include <stdio.h>
main()
{
	
	//int ke float
	int a = 17, b = 5;
	float c;
	c = (float)a / b;
	printf("C = %f\n", c);
	
	
	//float ke int
	float d = 17.5 , e= 5.2;
	int f;
	f = (int)d/e;
	printf("F = %d",f);
}

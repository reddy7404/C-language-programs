//Math library functions
#include<stdio.h>
#include<math.h>
int main()
{
	float a = 6.8, b = 2.2, c = 1.0, d = -100.23, e = 565.55;
	int x = 22, y = 300;
	/*
	printf("Ceil value of a = %.1f",ceil(a));
	printf("\nCeil value of b = %.1f",ceil(b));
	printf("\nCeil value of c = %.1f",ceil(c));
	
	printf("\n\nFloor value of a = %.1f",floor(a));
	printf("\nFloor value of b = %.1f",floor(b));
	printf("\nFloor value of c = %.1f",floor(c));  
	
	printf("\n\nAbsolute value of x = %d",abs(x));
	printf("\nAbsolute value of d = %.1f",fabs(d));  
	
	printf("\n\nLog value of b = %f", log(b));	//exponential log
	printf("\nBase 10 Log value of b = %f", log10(b));  //base 10 log  
	
	printf("\n\nSquare root of e = %.2f and y = %.2f",sqrt(e),sqrt(y)); 
	
	printf("\n\nx^b = %f",pow(x,b));  */
	
	printf("\n\nRound of value of a = %.1f, b= %.1f, d= %.1f",round(a),
	                                                  round(b),round(d));
	return 0;
}

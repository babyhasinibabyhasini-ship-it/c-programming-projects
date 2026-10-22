#include <stdio.h>
int main()
{   char op; float a,b;
     printf ("enter the expression: ");
     scanf  ("%f %c %f", &a, &op, &b);
     switch (op)
     {   case '+': printf("=%.2f\n", a+b);break;
	 case '-': printf("=%.2f\n", a-b);break;
	 case '*': printf("=%.2f\n", a*b);break;
	 case '/': printf("=%.2f\n", a/b);break;
	 default :printf("invalid operator\n");

     }
     return 0;
}




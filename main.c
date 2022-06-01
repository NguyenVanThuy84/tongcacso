#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (void)
{
	int num1;
	int num2;
	int sum;
	printf ("nhap so thu nhat: \n");
	scanf("%d",&num1);
	printf ("nhap so thu hai: \n");
	scanf ("%d",&num2);
	sum = num1+num2;
	printf("Tong cua hai so %d va %d la: %d ", num1,num2,sum);
	
	return 0;
}

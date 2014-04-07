/*Program to calculate the product of two numbers*/

#include <stdio.h>

int a, b, c;

/*Function for multiplication of two numbers*/
int product(int x, int y){
	return (x*y);
}


/*Main function*/
int main(){
	/*Input first number*/
	printf("Enter first number between 1 and 100: ");
	scanf("%d", &a);

	/*Inputn second number*/
	printf("Enter second number between 1 and 100: ");
	scanf("%d", &b);

	/*Calculate and display*/
	c = product(a, b);
	printf("%d times %d = %d \n", a, b, c);
}

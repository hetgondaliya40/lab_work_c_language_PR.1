#include<stdio.h>
#include<conio.h>
void main(){
	float celsius,fahrenheit;
	clrscr();
	printf("Enter the value of Celsius: ");
	scanf("%f",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("\nThe value of Fahrenheit is: %f",fahrenheit);
	getch();
}

#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	float area1,area2,area3;
	printf("Enter the first side of Triangle: ");
	scanf("%f",&area1);
	printf("\nEnter the second side of Triangle: ");
	scanf("%f",&area2);
	area3=180-area1-area2;
	printf("\nThird Side of Triangle is: %f",area3);
	getch();
}

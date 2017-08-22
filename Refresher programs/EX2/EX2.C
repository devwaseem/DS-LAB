#include<stdio.h>
#include<conio.h>
void main(){
 int i, num,fact=1;
 printf("Enter number=");
 scanf("%d",&num);
 for(i=1;i<=num;i++) fact*=i;
 printf("The factorial is %d",fact);
 getch();
}
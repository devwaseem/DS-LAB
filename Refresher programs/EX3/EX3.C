#include<stdio.h>
#include<conio.h>
int recursiveFunction(int);
void main(){
 int num,fac;
 printf("Enter the number=");
 scanf("%d",&num);
 fac=recursiveFunction(num);
 printf("The factorial is %d",fac);
 getch();
}
int recursiveFunction(int n){
 if(n>1) return n*recursiveFunction(n-1);
 else return 1;
}
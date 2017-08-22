#include<stdio.h>
#include<conio.h>
void main(){
 int a,b,c;
 printf("Enter value of a,b,c:-");
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && a>c) printf("A is largest");
 else if(b>c && b>a) printf("B is largest");
 else printf("C is largest");
 getch();
}
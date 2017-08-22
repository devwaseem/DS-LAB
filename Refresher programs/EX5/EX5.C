#include<stdio.h>
#include<conio.h>
void main(){
 int a[100],i,n,temp;
 printf("Enter the no.of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++) scanf("%d",&a[i]);
 temp=a[0];
 for(i=0;i<n;i++) if(a[i]>temp) temp = a[i];
 printf("The largest element is %d",temp);
 getch();
}

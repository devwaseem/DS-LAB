#include<stdio.h>
#include<conio.h>
void main(){
 int a[100],flag,i,n,s;
 printf("Enter number of elements in the array:");
 scanf("%d",&n);
 for(i=0;i<n;i++) scanf("%d",&a[i]);
 printf("Enter element to search in array");
 scanf("%d",&s);
 for(i=0;i<n;i++){
   if(a[i]==s) flag =1;
   else flag=0;
 }
 if(flag==1) printf("Element Found");
 else printf("Element not found");
 getch();
}

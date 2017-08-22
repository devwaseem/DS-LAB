#include<stdio.h>
#include<conio.h>
void main(){
  int a[100],i,n,sum=0;
  printf("Enter the no. of elements=");
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  for(i=0;i<n;i++) sum += a[i];
  printf("The sum of the array is %d",sum);
 getch();
}

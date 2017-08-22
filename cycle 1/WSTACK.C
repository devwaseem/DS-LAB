#include<stdio.h>
#include<conio.h>
int stack[50];
int top=-1;
void push();
void pop();
void display();
int n,choice;
void main(){
 clrscr();
 printf("Enter the size of stack");
 scanf("%d",&n);
 n--;
 do{
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.display\n");
	printf("4.exit");
	printf("\nEnter the choice");
	scanf("%d",&choice);
	switch(choice){
		case 1:push(); break;
		case 2:pop(); break;
		case 3:display(); break;
		case 4:exit(0);
		default: printf("Enter the correct choice!\n");
	}
 }while(choice!=4);
 getch();

}
void push(){
	int ele;
	if(top>n-1){
	printf("stack is full\n");
	}else{
	 top=top+1;
	 printf("Enter the element to insert\n");
	 scanf("%d",&ele);
	 stack[top]=ele;
	}
}
void pop(){
 if(top==-1){
  printf("stack empty\n");
 }else{
 printf("The popped element is %d");
 }
}
void display(){

}





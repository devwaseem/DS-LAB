#include<stdio.h>
#include<conio.h>
#define SIZE 5
//global declarations
void insert();
void delete();
void display();
void decor();
void clr();
int queue[SIZE],rear=-1,front=-1,item,count;
void main(){ //Main function
int ch;
clrscr();
do{
  decor();
  printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
  decor();
  printf("\nEnter your choice:");
  scanf("%d",&ch);

  switch(ch){
  case 1: insert(); break;
  case 2: delete(); break;
  case 3:display(); break;
  case 4: exit(0);
  default: printf("Invalid choice");
  }

}while(ch!=4);// Do while ends
getch();
}// Main Ends
void insert(){
	if((front==0 && rear == SIZE-1) || (front==rear+1)) printf("Queue is ful");
	else {
		printf("Enter the element");
		scanf("%d",&item);
		if(rear==-1){
			rear=0;
			front=0;
		}else if(rear==SIZE-1) rear=0;
		else rear++;
		queue[rear]=item;
	}//else
	clr();
}//insert function ends
void delete(){
	if(front==-1) printf("Queue is empty\n");
	else {
		item = queue[front];
		if(front==rear){
			front=rear=-1;
		}else if(front==SIZE-1){
			front=0;
		}else{
			front++;
			printf("Deleted ele is %d",item);
		}
	}

}//delete function ends
void display(){
 int front_pos=front,rear_pos=rear;
 if(front==-1){
  printf("Queue is empty");
  clr();
  return;
 }
 printf("Queue element is \n");
 if(front_pos<=rear_pos){
  while(front_pos<=rear_pos){
   printf("%d\t",queue[front_pos]);
   front_pos++;
  }
 }else{
   while(front_pos<=SIZE-1){
    printf("%d\t",queue[front_pos]);
    front_pos++;
   }
   front_pos=0;
   while(front_pos<=rear_pos){
    printf("%d\t",queue[front_pos]);
    front_pos++;
   }
 }
 clr();
}
void decor(){
printf("=================");
}
void clr(){
getch();
 clrscr();
}


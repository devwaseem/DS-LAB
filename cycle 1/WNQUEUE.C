#include<stdio.h>
#include<conio.h>
int queue[50],size,item,front=-1,rear=-1,choice=-1;
void enqueue();
void dequeue();
void display();
void main(){
clrscr();
printf("Enter the size of queue:");
scanf("%d",&size);
do{
   printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
   printf("Enter your choice:");
   scanf("%d",&choice);
   switch(choice){
    case 1: enqueue(); break;
    case 2: dequeue(); break;
    case 3: display(); break;
    case 4: return;
   }
}while(choice!=4);
getch();
}//MAIN ENDS
void enqueue(){
 if(rear==size-1){
  printf("The queue is full\n");
  return;
 }

 if(front==-1){
  front=rear=0;
 }else{
  rear++;
 }


 printf("Enter the element to enqueue:\n");
 scanf("%d",item);
 queue[rear]=item;
}//enqueue ends
void dequeue(){
  if(front>rear){
   printf("Queue is empty\n");
   return;
  }
  printf("Dequeued element is %d\n",queue[front]);
  front++;
}//dequeue
void display(){
if(front==-1 && rear ==-1){
printf("QUEUE is empty");
return;
}else{
int i;
 for(i=front;i<=rear;i++)
 printf("%d\t",queue[i]);
}


}//










#include<iostream.h>
#include<conio.h>
//searching elements in array
class list{



private:
       int arr[100];

public:


	int arrcount;
       void append(int a){
	   arr[arrcount]=a;
	   ++arrcount;
       }

	 list(){
	 arrcount=0;
		for(int i =0;i<100;i++){
			arr[i]=0;
		 }
	}

       void search(int a){
	for(int i=0;i<arrcount;i++){
	if(arr[i]==a){
	cout<<"============================"<<endl;
	      cout<<"FOUND"<<endl;
	cout<<"============================"<<endl;
	return;
	  }
	}
	cout<<"============================"<<endl;
	      cout<<"NOT FOUND"<<endl;
	cout<<"============================"<<endl;
       }

       void del(int a){
	int in = index(a);
	for(;in<arrcount;in++){
	 arr[in] = arr[in+1];
	 }
	 arrcount--;
       }

       int max(){
	int max=-1;
	for(int i=0;i<arrcount;i++){
	  if(max<arr[i]){
	   max=arr[i];
	  }
	}
	return max;
       }

       int count(){
	return arrcount;
       }

       int index(int a){
	 int index=0;
	 while(1==1){
	  if(arr[index]==a){
	  break;
	  }
	  index++;
	 }
	 return index;
       }

       void show(){
	int i=0;
	cout<<"============================"<<endl;
	for(;i<arrcount;i++){
	 cout<<arr[i]<<endl;
	 }
	 cout<<"============================"<<endl;
       }



};



void main(){

  int i;
  int el;
  list l;
  int nos;
  int option=1;
  cout<<"Enter the number of elements you want to add(max 99 allowed):";
  cin>>nos;

  for(i=0;i<nos;i++){
   cin>>el;
   l.append(el);
  }

  do{
  cout<<"============================"<<endl;
  cout<<"Enter your option (1-6):"<<endl;
  cout<<"1.append"<<endl;
  cout<<"2.delete"<<endl;
  cout<<"3.search"<<endl;
  cout<<"4.max"<<endl;
  cout<<"5.index"<<endl;
  cout<<"6.show all the elements"<<endl;
  cout<<"0.exit"<<endl;
  cout<<"============================"<<endl;
  cin>>option;
  switch(option){
   case 0:{

      return;
    }
    case 1:{
   static int temp;
   cout<<"Enter a number to add into array"<<endl;
   cin>>temp;
   l.append(temp);
    break;
    }
    case 2:{
     static int temp;
    cout<<"Enter a number to delete from array"<<endl;
   cin>>temp;
   l.del(temp);
    break;}
    case 3:{
     static int temp;
   cout<<"Enter a number to search in the array"<<endl;
   cin>>temp;
   l.search(temp);
    break;}
    case 4:{
    cout<<"The max number is "<<l.max()<<endl;
    break;}
    case 5:{
     static int temp;
    cout<<"Enter a number to show its array index"<<endl;
   cin>>temp;
   cout<<"The index for element "<<temp<<"is "<<l.index(temp)<<endl;
    break;}
    case 6:{
    l.show();
    break;
    }
  }

  }while(option !=0);



}
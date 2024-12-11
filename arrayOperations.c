#include<stdio.h>
#include<stdlib.h>

int a[5],pos,i=0,num;

void display();
void create();
void insert();
void Delete();


int main(){
	while(1){
	int choice;
	printf("Please enter the choice \n");
	printf("1 to create, 2 to insert, 3 to delete, 4 to display,5 to break! \n");
	scanf("%d",&choice);
	switch(choice){
		case 1: create(); break;
		case 2:insert(); break;
		case 3:Delete();break;
		case 4:display();break;
		case 5:exit(0);
	}
}
	return 0;
}

void create(){
	printf("Please enter the number of elements you want in your array \n");
	scanf("%d",&num);
	
	
		if(num==0||num>5){
			printf("please enter a valid choice \n");
			exit(0);
		}
		
		for(i=0;i<num;i++){
			printf("Enter the value of element %d \n",i+1);
			scanf("%d",&a[i]);
		}
				
		
		
	}
	
void insert(){
	int elem;
	if(num==5){
		printf("Sorry the stack is full \n");
		exit(0);
	}
	do{
		printf("Enter a valid position at which the element has to be inserted \n");
		scanf("%d",&pos);
	}while(pos<0&&pos>=5);
	printf("ENter the element to be inserted \n");
	scanf("%d",&elem);
	
	for(i=num-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=elem;
	num+=1;
}

void Delete(){
	if(num==0){
		printf("The stack is empty no element to delete \n" );
		exit(0);
	}
	
	printf("ENter the valid position (0 to %d) to be deleted \n",num);
	scanf("%d",&pos);
	
	for(i=pos+1;i<num;i++){
		a[i]=a[i+1];
	}
	num-=1;
}


void display(){
	for(i=0;i<num;i++){
		printf("%d ",a[i]);

	}
		printf("\n");
}





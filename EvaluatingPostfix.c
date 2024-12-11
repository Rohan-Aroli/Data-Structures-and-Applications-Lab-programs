#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int top=-1;
char postfix[30],stack[30];

void push(int item){
	top+=1;
	stack[top]=item;
}

int pop(){
	int item;
	item=stack[top];
	top-=1;
	return item;
}


void main(){
	int i=0,j=0;
	int op1,op2;
	printf("Enter a valid postfix expression \n");
	scanf("%s",postfix);
	
	for(i=0;postfix[i]!='\0';i++){
		if(isdigit(postfix[i])){
			push(postfix[i]-'0');
			
		}
		else{
			op2=pop();
			op1=pop();
			switch(postfix[i]){
				case '+':push(op1+op2);
					break;
				case '-':push(op1-op2);
					break;
				case '*':push(op1*op2);
					break;
				case '/':push(op1/op2);
					break;
				case '$':
				case '^':
					push(pow(op1,op2));
					break;
				default: printf("Not a valid operator \n");
			}
			
			
			
		}
	}
	printf("the evalluated term is %d",stack[0]);

	}


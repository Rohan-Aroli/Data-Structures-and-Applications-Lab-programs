#include<stdio.h>
#include<math.h>
void hoi(int n,char from,char aux,char to);
int main(){
	int n;
	
	printf("Enter the no of disks \n");
	scanf("%d",&n);
	hoi(n,'a','b','c');
	printf("Total moves %f",pow(2,n)-1);
	return 0;
}
void hoi(int n,char from,char aux,char to){
	
	if(n==1){
		printf("Move the disk %d from %c to %c\n",n,from,to);
		return;
	}
	
	hoi(n-1,from,to,aux);
	
	printf("move disk %d from %c to %c\n",n,from,to);
	
	hoi(n-1,aux,from,to);
	
}

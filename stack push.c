#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("\n Enter the size of the stack[max=100]:");
	scanf("%d",&n);
	printf("\n\t STACK OPERATIONS USING ARRAY");
	printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
	do {
		printf("\nEnter the choice:");
		scanf("%d",&choice);
		switch(choice) {
			case 1: {
				push();
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				display();
				break;
			}
			case 4: {
				printf("\n\t EXIT POINT");
				break;
			}
			default: {
				printf("\n\t Please Enter a valid choice(1/2/3/4)");
			}
		}
	} while(choice!=4);
	return 0;
}
void push() {
	if(top>=n-1) {
		printf("\n\t STACK is overflow");
	} else {
		printf("Enter as value");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\n\t STACK UNDERFLOW");
	}
	else
	{
		printf("\n\t The popped elemets is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\n The elements in STack\n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
			printf("\n Press next choice");
		}
	}
	else
	{
		printf("\n The stack is empty");
	}
}

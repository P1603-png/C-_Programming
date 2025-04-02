#include<stdio.h>
int main()
{
	int stack[20],n,top=-1;
	int ele,ch,i;
	printf("Enter size of stack:");
	scanf("%d",&n);
	
	do{
		printf("\n...MENU...");
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.exit");
		
		printf("\nEnter choice:");
	    scanf("%d",&ch);
	    
	    switch(ch)
	    {
	    	case 1:push(stack,n,&top,ele);
	    	break;
	    	
	    	case 2:pop(stack,&top);
	    	break;
	    	
	    	case 3:display(stack,top);
	    	break;
	    	
	    	case 4:return 0;
	    	break;
	    	
	    	default:printf("\ninvalid choice");
		}
	} while(ch!=4);
}
void push(int stack[],int n,int *top,int ele)
{
	printf("\nEnter element to insert:");
	scanf("%d",&ele);
	
	if(*top==n-1)
	{
		printf("\nstack is overflow");
	}
	else
	{
		(*top)++;
		stack[*top]=ele;
	}
}	
void pop(int stack[],int *top)
{
   if(*top==-1)
   {
   	printf("\nstack is underflow");
   }
   else
   {
   	int temp;
   	temp=stack[*top];
   	(*top)--;
   	printf("\nThe popped element is:%d",temp);
	}	
}	
void display(int stack[],int top)
{
	if(top==-1)
	{
		printf("\nstack is empty");
	}
	else
	{ 
	  printf("\nstack elements:");
		for(top;top>=0;top--)
		{
			printf("\n%d",stack[top]);
		}
	}
}

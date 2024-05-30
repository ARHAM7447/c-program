#include<stdio.h>
#define size 50
int f=-1, r=-1;
int queue [size];
void enque();
void deque();
void display();
int main  (){
	int ch;
	do{
		printf("\n[1].enque,[2].deque,[3].display,[4].exit");
		printf("\n enter your choice[1-4]:");
		printf("\n enter your choice[1-4]:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			enque();
			break;
			
			case 2:
			deque();
			break;
			
			case 3:
			display();
			break;
			
		case 4:
        break;
         default:
			printf("\n invalid option\n");
		}
	}while (ch !=4);
}
  void enque(int){
  	int n;
  	if (r==size-1)
  	printf("overflow\n ");
  	else
  	{
  		if(f==-1)
  		f=0;
  		printf("element to be inserted in the queue:");
  		scanf("%d",&n);
  		r=r+1;
  		queue[r]=n;
	  }
  }
  
  void deque(){
  	if(f==-1 || f>r)
  	{
  		printf("under flow\n");
  		return;
	  }
	  else
	  {
	  	printf("element deleted form the queue:%d\n",queue[f]);
	  	f=f+1;
	  }
  }
  void display()
  {
  	if (f==-1)
  	printf("empty queue\n");
  	else
  	{
  		printf("queue:\n");
  		for(int i=f; i<=r; i++)
  		printf("%d", queue[1]);
  		printf("\n");
	  }
  }
#include <stdio.h>

int Queue[10];

int size = 10;

// creating dummy headers
int front = 0, rear = 0;

int count = 0;

// insert into queue
void enque(int data)
{
  
   // checking if queue is full 
   if(count == 10)
   {
      printf("Queue is full:\n");
   }
   else
   {
      
      
      // incrementing counter
      count += 1;
      
      // inserting data into queue
      Queue[rear] = data;
      
      // incrementing rear
      rear += 1;
   }
   
}

// delete data from queue
void deque()
{
    
    // checking if queue is empty
    if(count == 0)
    {
        printf("Queue is empty:\n");
      
    }
    else
    {
       
       if(front > 9)
          front = 0;
        
       printf("%d",Queue[front]);
       
       Queue[front] = 0;
       
       front += 1;
       
       count -= 1;
       
    }
}


void main()
{
  
   for(int i = 0; i < 11; i++)
      enque((i+1)*10);
      
   for(int i = 0; i < 11; i++)
      deque();
  
}

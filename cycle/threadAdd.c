/*
Program to create a thread called add, 
which access two integers from the user
and print the sum. 
*/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void* add(void* arg)
{
 
  int i,num1,num2;

  printf("\nEnter the numbers :-->\n");
  scanf("%d%d",&num1,&num2);
  printf("%d\n",num1+num2);
 
}
void print(int *result)
{
  
  printf("Sum =  %d",*result);
}

int main()
{
  
  int *res;
  pthread_t  newThread;
  pthread_create(&newThread, NULL, add,  
  NULL);
  pthread_join(newThread,(void *)res);
  print(res);


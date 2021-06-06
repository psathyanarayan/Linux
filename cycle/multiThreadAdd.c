/*
Program to create two threads 
and execute the addition of two numbers parallely in both threads.
*/

#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
void* add(void* arg)
{
 
  int i,id=0,sum;
  id++;
  int *arr = (int *)arg;
  sum =arr[0]+arr[1];
  printf("Sum of Thread %d : %d\n",id,sum);
  
  return NULL;
}


int main()
{
  int arr[2],i;
  int *res;

  pthread_t  newThread;


  printf("\nEnter the numbers :-->\n");
  for(i=0;i<2;i++)
  {
     scanf("%d",&arr[i]);
  }
for(i=0;i<3;i++)
  pthread_create(&newThread, NULL, add,  (void *)arr);
 
  //pthread_join(newThread,(void *) &res);
   pthread_exit(NULL);

}

/*
Program to create 2 process one parent process must bring odd numbers up to limit n. At to the same
timeumbers upto n. Also child process must bring even n print the process id.
*/

#include<stdio.h>
#include<unistd.h>
int main()
{
  int limit , arr[50],i,f_return;
  printf("Enter the limit\n");
  scanf("%d",&limit);
  for(i=0;i<limit;i++)
  {
    printf("arr[%d]-->",i);
    scanf("%d",&arr[i]);  
  }

  f_return = fork();
  if(f_return >0)
  {
    printf("Parent process");
    for(i=0;i<limit;i++)
    {
      if(arr[i]%2 !=0)
      {
        printf("%d",arr[i]);
      }
    }
    printf("\nParent: my pid is %d \n Parent pid is %d\nMy child pid is %d\n",getpid(),getppid(),f_return);
  }
  else{
    printf("Child Process");
    for(i=0;i<limit;i++)
    {
      if(arr[i]%2 == 0)
      {
        printf("%d ",arr[i]);
      }
    }
    printf("\nChild: my pid is %d \n Parent pid is %d\nMy child pid is %d\n",getpid(),getppid(),f_return);
  }
}

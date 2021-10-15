#include<stdio.h>
int func(int num){
  int i,f=1;
 
  for(i=1;i<=num;i++)
      f=f*i;
 
  printf("Factorial of %d is: %d \n",num,f);
  return 0;
}


int main(){
	func(5);
	return 0;
	printf("Exiting main \n");
}
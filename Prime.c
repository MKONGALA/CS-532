#include <stdio.h>
int main() {
  int n, i, flag = 0, x=1;
  while(x==1){
  printf("Enter a positive integer: ");
  //Here n refers to input number to check prime or not
  scanf("%d", &n);
    //Here i refers iterate the loop
  for (i = 2; i <= n / 2; ++i) {
 //Here flag is a type of Boolen to decide number is prime or not 
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
// flag is 1 then it is not a prime number and if n is 0 or 1 then also it is not a prime number 
    if (flag == 1 || n == 0 || n == 1)
      printf("%d is not a prime number.", n);
    else
		// flag is 0 for prime numbers
      printf("%d is a prime number.", n);
      
     printf("\n"); 
	 // Here user can continue the process or they can Exit.
     printf("\nTo continue please press 1, To Exit press 0: ");
     scanf("%d",&x);
  }

  return 0;
}
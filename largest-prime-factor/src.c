/* https://projecteuler.net/problem=3 */

#include <stdio.h>

int main(void)
{
  long number = 600851475143;
  int i = 0;

  // Endless while loop because I don't know how many iterations it takes
  while (1)
  {
    // If number is 1 then we have reached the end
    if (number == 1) break;

    // If the number is divisible by i, then divide and assign new value to number variable
    if (number % i == 0)
    {
      printf("i is: %i\n", i);
      number = number / i;
    }
    i++;
  }

  return 0;
}
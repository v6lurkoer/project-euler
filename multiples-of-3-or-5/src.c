/* https://projecteuler.net/problem=1 */

#include <stdio.h>

const int max = 1000;

int main(void)
{
  int sum = 0;        // sum of the divisible numbers
  int numbers[max];   // to store the divisible numbers
  int vi = 0;         // number index in array

  // Go through each number one by one
  for (int i = 0; i < max; i++)
  {
    // Check if number is divisible by 3 or 5
    if (i % 3 == 0 || i % 5 == 0)
    {
      printf("%d\n", i);
      sum += i;
      numbers[vi] = i;
      vi++;
    }
  }

  printf("The sum of all the multiples of 3 or 5 below 1000 is: %d\n", sum);

  return 0;
}
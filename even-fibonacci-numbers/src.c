/* https://projecteuler.net/problem=2 */

#include <stdio.h>

const int threshold = 4000000; // four million

int main(void)
{
  int sum = 0;  // sum of the even fibonacci numbers
  int num1 = 1;
  int num2 = 2;
  int temp = 0;

  // Make a fibonacci sequence generator
  while (num1 <= threshold || num2 <= threshold)
  {
    if (num1 % 2 == 0)
    {
      sum += num1;
      printf("%i\n", num1);
    }

    temp = num1 + num2;
    num1 = num2;
    num2 = temp;
  }

  printf("Sum of the even-valued fibonacci numbers under %i is: %i\n", threshold, sum);

  return 0;
}
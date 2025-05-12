#include <stdio.h>
#include <stdbool.h>

void multiplier(int x, int y);
void checker(void);
// bool isPalindrome(char *p, int s);
int isPalindrome(void);
int intLen(int number);

const int max = 999;
const int t_amt = 900 * 900;

int nums[t_amt];

int main(void)
{
  int x = 100;
  int y = 100;

  multiplier(x, y);
 // checker();

  printf("Success, the largest palindrome is %i\n", isPalindrome());

  return 0;
}

void multiplier(int x, int y)
{
  for (int i = 0; i < t_amt; i++)
  {
    if (x > max)
    {
      if (y > max) break;

      x = 100;
      y++;
    }

    printf("%i * %i = ", x, y);
    printf("%i\n", x * y);

    nums[i] = x * y;
    x++;
  }
}

/* void checker(void)
{
  int count = t_amt - 1;

  while (1)
  {
    int size = intLen(nums[count]);
    char buffer[size];
    sprintf(buffer, "%i", nums[count]);

    if (isPalindrome(buffer, size))
    {
      printf("The largest palindrome made from the product of two 3-digit numbers is %i\n", nums[count]);
      break;
    }
    else count--;
  }
} */

int isPalindrome(void)
{
  int count = t_amt - 1;

  while (1)
  {
    int size = intLen(nums[count]);
    char buffer[size];
    sprintf(buffer, "%i", nums[count]);
    printf("%s\n", buffer);
    break;

    if (buffer[0] != buffer[size - 1])
    {
      count--;
      continue;
    }
    else if (buffer[1] != buffer[size - 2])
    {
      count--;
      continue;
    }
    else if (buffer[2] != buffer[size - 3])
    {
      count--;
      continue;
    }
    else return nums[count];
  }

  return 0;
}

/* bool isPalindrome(char *p, int s)
{
  if (s % 2 == 0)                         // if s is divisible by 2 then do three checks
  {
    if (*p != (*p + (s - 1))) return false;
    else if ((*p + 1) != (*p + (s - 2))) return false;
    else if ((*p + 2) != (*p + (s - 3))) return false;
    else return true;
  }
  else                                    // if s is not divisible by 2 then do two checks
  {
    if (*p != (*p + (s - 1))) return false;
    else if ((*p + 1) != (*p + (s - 2))) return false;
    else return true;
  }

  return false;
} */

int intLen(int number)
{
  int size = 1;                           // min size is 1
  int temp = 10;                          // temp value used for finding the number's size
  int factor = 10;                        // multiplying by 10 adds an extra length to compare against each iteration

  while (1)
  {
    if ((number - temp) < 0) return size;
    else if ((number - temp) >= 0)
    {
      temp = temp * factor;
      size++;
    }
    else return 0;
  }

  return 0;
}

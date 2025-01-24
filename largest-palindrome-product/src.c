#include <stdio.h>
#include <stdbool.h>

void multiplier(int x, int y);
void checker(void);
bool isPalindrome(char *p);
int sizeOfInt(int number);

const int max = 999;
const int t_amt = 900 * 900;

int n[t_amt];

int main(void)
{
  int x = 100;
  int y = 100;

  // multiplier(x, y);
  checker();

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

    n[i] = x * y;
    x++;
  }
}

void checker(void)
{
  while (1)
  {
    int count = t_amt;
    int size = sizeOfInt(n[count - 1]);
    char buffer[size];
    /* char buffer[10]; */
    sprintf(buffer, "%i", n[count - 1]);

    if (!isPalindrome(buffer))
    {
      printf("The largest palindrome made from the product of two 3-digit numbers is %i\n", n[count - 1]);
      break;
    }

    count--;
  }
}

bool isPalindrome(char *p)
{
  printf("%c\n", *p);
  p++;
  printf("%c\n", *p);
  p++;
  printf("%c\n", *p);
  p++;
  printf("%c\n", *p);
  p++;
  printf("%c\n", *p);
  p++;
  printf("%c\n", *p);
  return false;
}

// TODO: find the size of the number (digit count) to use as array size
int sizeOfInt(int number)
{
  return 0;
}

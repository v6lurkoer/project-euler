/* https://projecteuler.net/problem=5 */

#include <stdio.h>

const int MIN = 1;
const int MAX = 20;

int main(void)
{
    int num = 1;

    while (1)
    {
        for (int i = MIN; i <= MAX; i++)
        {
            if ((num % i) != 0) break;
            else
            {
                if (i == MAX)
                {
                    printf("%d\n", num);
                    return 1;
                }
                continue;
            }
        }
        num += 1;
    }

    return 0;
}
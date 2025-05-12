#include <stdio.h>

const int MIN = 100;
const int MAX = 999;

int main(void)
{
    int x = MIN;
    int y = MIN;

    int pal = 0;

    while (1)
    {
        int sum = 0;
        sum = x * y;

        int n = sum;
        // printf("%d\n", n);
        int rev = 0;

        while (sum > 0)
        {
            int dig = sum % 10;
            rev = rev * 10 + dig;
            sum = sum / 10;
        }

        if (n == rev && n > pal) pal = n;
        printf("%d\n", pal);

        x++;
        if (x > MAX)
        {
            x = MIN;
            y++;
            if (y > MAX) break;
        }
    }

    return 0;
}

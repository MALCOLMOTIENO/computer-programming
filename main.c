#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a = 0;
    while (a <= 100)
    {
        printf("%4d Degrees F = %4d Degrees C\n",
            a, (a-32)*5/9);
            a = a + 10;
        Scanf("%d", &a);

    }
    return 0;
}

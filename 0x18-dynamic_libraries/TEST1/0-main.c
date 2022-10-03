#include "main.h"

int main()
{
    printf("%d + %d = %d\n", 7, 9, add(7, 9));
    printf("%d - %d = %d\n", 7, 9, sub(7, 9));
    printf("%d * %d = %d\n", 7, 9, mul(7, 9));
    printf("%d / %d = %d\n", 8, 2, div(7, 9));
    printf("%d %% %d = %d\n", 9, 3, mod(7, 9));

    return 0;
}

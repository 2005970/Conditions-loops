#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X % 2 == 0 && X >= 4)
        printf("YES");
    else
        printf("NO");

    return 0;
}

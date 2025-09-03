#include <stdio.h>

int main()
{
    int tableau[] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, tableau[i]);
        scanf("%d", &tableau[i]);
    }
    return 0;

}
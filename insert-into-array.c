#include <stdio.h>

int main()
{

    int x[] = {1, 2, 3, 4, 5, 6};
    int length = 6;
    int y[] = {};
    printf("The Element of the Original Array \n");
    int item = 10, pos = 3, i = 0;
    while (i < length)
    {
        if (i < pos)
        {
            y[i] = x[i];
        }
        else if (i == pos)
        {
            y[pos] = item;
            length++;
        }
        else
        {
            y[i] = x[i - 1];
        }
        printf("y[%d] = %d \n", i, y[i]);
        i++;
    }

    return 0;
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
 int b;
 do
 {
    // take user input
    b = get_int("height: ");
 }
 while (b < 1 || b > 8);

    for (int i = 0; i < b; i++)
{
    for (int j = 0; j < b; j++)
    {
        if (i + j < b - 1)
        printf(" ");
        else
        printf("#");
    }

        printf("\n");
}
}

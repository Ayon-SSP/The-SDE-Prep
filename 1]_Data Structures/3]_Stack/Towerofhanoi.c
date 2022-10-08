#include <stdio.h>
void toh(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        return;
    }
    toh(n - 1, src, help, dest);
    printf("move %d from %c to %c \n", n, src, dest);
    toh(n - 1, help, dest, src);
}
int main()
{
    int n;
    printf("Enter the value of n.\n");
    scanf("%d", &n);
    toh(n, 'a', 'c', 'b');
    return 0;
}
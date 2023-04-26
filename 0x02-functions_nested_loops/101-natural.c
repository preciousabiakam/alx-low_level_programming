#include <stdio.h>
/**
*main - This func. will print count of multiples
*o 3 or 5 < 1024
*Return: return 0 if successful
*/

int main(void)

{

int n, sum = 0;

for (n = 0; n < 1024; n++)

{

if ((n % 3) == 0 || (n % 5) == 0)

sum += n;

}

printf("%d\n", sum);

return (0);

}

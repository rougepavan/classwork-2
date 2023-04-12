#include <stdio.h>
int main ()
{
  int num,a, rem, result = 0;
  printf ("Enter a three-digit integer: ");
  scanf ("%d", &num);
  a = num;

  while (a!= 0)
    {
      rem = a % 10;

      result += rem * rem * rem;

       a/= 10;
    }

  if (result == num)
    printf ("%d is an Armstrong number.", num);
  else
    printf ("%d is not an Armstrong number.", num);

  return 0;
}

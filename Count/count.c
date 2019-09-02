#include <stdio.h>

main()
{
  long nc;

  nc = 0;
  while (getchar() != EOF)
  {
    ++nc;
  }
  printf("Procssed strings of characters");
  printf("%ld\n", nc);
}
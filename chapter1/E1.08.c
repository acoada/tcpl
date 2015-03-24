#include <stdio.h>
/* count blanks, tabs and newlines respectively. */
int main(void)
{
  int c, nb, nt, nn;
  nb = nt = nn = 0;
  while ((c = getchar()) != EOF)
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nn;
  printf("\nThere are: \n%d blanks\n%d tabs\n%d newlines\n", nb, nt, nn);
}

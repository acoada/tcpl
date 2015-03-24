#include <stdio.h>
/* squeeze one or more blanks to a single one */

int main(void)
{
  int c, lw;

  lw = 0;
  while ((c = getchar()) != EOF) {

//    if (c == ' ' && lw == ' ')
//       ;
//    else
//      putchar(c);

    if (c != ' ' || lw != ' ')
      putchar(c);

    lw = c;
  }
  
  return 0;
}

#include <stdio.h>
int main(void)
{
  int c, nl;
//  printf("%d\n", nl);
  nl = 0;
  while((c = getchar()) != EOF)
    if (c == 10)
//    if (c == '\n')
      nl++;
  printf("%d\t\t\n\n", nl);
}

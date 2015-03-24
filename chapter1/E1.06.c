#include <stdio.h>
/* p17 */
/* The program prompts for input, and then capture a character
 * from the keyboard. If EOF is signalled the program prints 0.
 * Otherwise, it prints 1.
 * 
 * ISSUE: if I stike a none-ENTER key, the program whon't wait
 * for me to finish the second step.
 */
int main(void)
{
  int c;
  printf("Plz strike ENTER\n");
  printf("the value of getchar()!=EOF is: %d\n",getchar() != EOF);
  printf("Plz strike Ctrl-D\n");
  printf("the value of getchar()!=EOF is: %d\n",getchar() != EOF);
  return 0;
}

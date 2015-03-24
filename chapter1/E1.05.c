#include <stdio.h>
/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main(void)
{
  int fahr;

  printf("Fahrenheit\tCelsius\n");
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

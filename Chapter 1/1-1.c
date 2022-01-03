#include <stdio.h>

int main(void)
{
  float length_inch;
  float length_cm;
  
  printf("Please input the inch you want to transfer to cm:\n");
  scanf("%f", &length_inch);
  length_cm = length_inch * 2.54;
  printf("%f inch is equal to %f cm.\n", length_inch, length_cm);
  return 0;
}

// Author: Shakeb Siddiqui sms8508@psu.edu
// Collaborator: Dominic Savaglio djs7129@psu.edu
// Sneha Prem Chansran : smp6705@psu.edu
// Samantha Zolin: saz5193@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
int main(void) {
  char *tempstr = readline("Enter temperature in celsius: ");
  double temp = atof(tempstr);
  double fahrenheit = 9.0/5.0 * temp + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", temp, fahrenheit);
  return 0;
}
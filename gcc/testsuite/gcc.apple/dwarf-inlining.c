/* Radar 4548482 */
/* { dg-do compile } */
/* { dg-options "-O3 -gdwarf-2 -dA" } */
/* { dg-skip-if "Unmatchable assembly" { mmix-*-* } { "*" } { "" } } */
/* { dg-final { scan-assembler "\[#@;!/|\]+\[ \t\]+DW_AT_call_line" } } */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int 
main (int argc, char **argv)
{
  int x;
  
  fprintf (stdout, "Here we go!!\n");
  
  x = foo ();

  fprintf (stdout, "We made it all the way to the top with %d\n", x);

  return 0;
}

int
foo (void)
{
  int  y;
  double r;

  y = bar ();

  r = sqrt (y);
  fprintf (stdout, "The squareroot of %d is %f.\n",  y, r);

  return y;
}

int
bar (void)
{
  int z;
  int result = 1;
  int n;
  int i;

  z = baz ();
  n = z % 10;

  for (i = 0; i < n; i++)
    if (i > 0)
      result = result * i;

  fprintf (stdout, "Multiplying the first ten numbers of %d is %d\n", z, result);

  return z;
}

int
baz (void)
{
  char *buffer;
  int len;
  int answer;

  buffer = (char *) malloc (80);
  fprintf (stdout, "Please enter a number: ");
  gets (buffer);
  answer = atoi (buffer);

  return answer;
}

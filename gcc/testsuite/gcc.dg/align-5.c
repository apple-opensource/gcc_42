/* { dg-do compile } */
/* { dg-options "-falign-functions=1 -falign-labels=1 -falign-loops=1" } */
/* { dg-final { scan-assembler "align\[ \t]6" } } */

int foo(int * p)
{
  int i = 0;
  int c = 0;
  
  while __attribute__((aligned(64))) (i < 100)
    {
      c += p[i];
      i++;
    }
  return c;
}

/* APPLE LOCAL file CW asm blocks */
/* { dg-do assemble { target powerpc*-*-darwin* i?86*-*-darwin* } } */
/* { dg-options { -fasm-blocks -msse3 } } */
/* Radar 4298005 */

void foo() {
  _asm nop
}

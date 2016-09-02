/* APPLE LOCAL file 4695109 */
/* Protocol meta-data for protocol used in @protocol expression must be generated. */
/* { dg-options "-mmacosx-version-min=10.5 -fobjc-abi-version=2" { target powerpc*-*-darwin* i?86*-*-darwin* } } */
/* { dg-do compile { target *-*-darwin* } } */

@protocol Proto1
  +classMethod;
@end

@protocol Proto2
  +classMethod2;
@end

int main() {
	return (long) @protocol(Proto1);
}
/* { dg-final { scan-assembler "L_ZL23_OBJC_PROTOCOL_\\\$_Proto1:" } } */
/* { dg-final { scan-assembler-not "_ZL23_OBJC_PROTOCOL_\\\$_Proto2" } } */

/* APPLE LOCAL file 4649718, 4651088 */
/* Test for bogus property declarations. */
/* APPLE LOCAL radar 4899595 */
/* { dg-options "-mmacosx-version-min=10.5" } */
/* { dg-do compile } */

@interface MyClass {

};
@property unsigned char bufferedUTF8Bytes[4]; /* { dg-error "bad property declaration" } */
@end

@implementation MyClass
@end


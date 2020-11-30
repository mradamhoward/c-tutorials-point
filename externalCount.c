#include <stdio.h>
 
extern int externalCount;
 
void write_extern(void) {
   printf("externalCount is %d\n", externalCount);
}
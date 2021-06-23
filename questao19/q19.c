#include "gc.h"
#include <assert.h>
#include <stdio.h>

int main()
{
  int i;

  GC_INIT();
  for (i = 0; i < 10000000; ++i){
     int *p = (int *) GC_MALLOC(1000*sizeof(int));
   }
   free(p);
  return 0;
}
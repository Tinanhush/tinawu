#include <math.h>
#include <stdio.h>

int main() {
  int  *i,ii; 
  ii = 3 ;
  i = &ii;
  printf(“ *i = %d “, *i);
  printf( " &i = %d ",&ii );
  Printf( “ i = %d  “, i);
  int a[20], *aptr; 

  aptr = a; 
  aptr = &a[0]; 
   
  return 0;
}

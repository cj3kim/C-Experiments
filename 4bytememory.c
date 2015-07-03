#include <stdio.h>

int power(int x,int y){

   int r=1;
    do{

        r*=r;
          if(y%2)
               r*=x;
    }while(y>>=1);
     return r;
}

int main() {
  int aryLen = 2;
  unsigned int ary[aryLen];
  int intByteSize = sizeof(unsigned int);
  int inc = 0;
  int divisor = 1;

  ary[0] = (4294967295/divisor) + inc ;
  ary[1] = 2;

  printf("int byte size: %d", intByteSize);
  printf("\n%u %u\n", ary[0], ary[1]);

  //printf("\n%lu %lu\n", ary[0], ary[1]);

  return 0;

}

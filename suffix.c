#include <stdio.h>
#define MAXN 6

int main() {

  char c[MAXN] = {'h', 'e', 'l', 'l', 'o' };

  /*phao: Declare `a` as an array of 6 elements of pointer to char.*/
  char *a[MAXN];

  for (int i = 0; i < MAXN; i++) {
    a[i] = &c[i];
  }
  a[5] = 0;

  printf("a[0]  %s\n", a[0]); 
  printf("a[0] dereferences *(a + 0). Its value is the pointer to &c[0] aka c + 0 \n");
  printf("\n");
  printf("a[1]  %s\n", a[1]);
  printf("a[1] dereferences *(a + 1). Its value is the pointer to &c[1] aka c + 1\n");
  printf("\n");

  printf("c     %s\n", c);    
  printf("c is the memory address of the first element of c\n");
  printf("\n");
  printf("c+1   %s\n", c+1); 
  printf("c+1 is the memory address of the 2nd element of c\n");
  printf("\n");
  printf("&c[1] %s\n", &c[1]);
  printf("c[1]'s value is 'e' since c[1] is sugar for *(c+1). Thus, &c[1] returns us the memory address of 'e'.\n");
  printf("\n");

  printf("a[0][3] %c\n", a[0][3]); 
  printf("a[0] gives us the pointer to c's address. a[0][3] is short for *(c + 3)\n");
  printf("\n");
  printf("c[0]    %c\n", c[0]);    
  printf("c[0] is sugar for *(c + 0), which returns 'h'");
  printf("c[1]    %c\n", c[1]);

  //Why is each pointer treated like an array? 
  //cj3kim, printf interprets its arguments entirely according to the format string you give it (because it simply doesn't have any other way to know what they are
  //credits to dav1d
  //[1] increments the pointer and dereferences where as c+1 only increments the pointer
  //incrementing a pointer is like moving the index where a pointer is pointing to

  // char c, which I declared as a 
  // you can use pointers like arrays because indexing is an operation on pointers
  // x[y] is exactly equivalent to *(x + y)

  //cj3kim:  so with   char c[] = {'h', 'e', 'l', 'l', 'o' }; and   printf("%s\n", c); I correctly print out "hello", but if I pass printf("%s\n", c[1) I get a segfault error
  //credits to edk
  //edk: cj3kim, c[1] dereferences c + 1 to get 'e', which is obviously not a pointer
  //edk: cj3kim, a[1], on the other hand, dereferences a + 1, and you previously stored a *pointer to* c[1] there

  return 0;
}


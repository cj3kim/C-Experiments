include <stdio.h>

int main()
{

  int *ptr_a;
  int **ptr_b;
  int ***ptr_c;

  int y = 5;

  ptr_a = &y;
  ptr_b = &ptr_a;
  ptr_c = &ptr_b;

  printf("y: %d\n", y);
  printf("&y: %d\n\n", &y);

  printf("ptr_a: %d\n", ptr_a);
  printf("*ptr_a: %d\n", *ptr_a);
  printf("&ptr_a: %d\n\n", &ptr_a);

  printf("ptr_b: %d\n", ptr_b);
  printf("**ptr_b: %d\n", **ptr_b);
  printf("&ptr_b: %d\n\n", &ptr_b);

  printf("ptr_c: %d\n", ptr_c);
  printf("***ptr_c: %d\n", ***ptr_c);
  printf("&ptr_c: %d\n\n", &ptr_c);

  return 0;
}

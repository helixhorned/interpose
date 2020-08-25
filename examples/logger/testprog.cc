#include <cstdio>
#include <cstdlib>

int main(int, char**) {
  printf("Hello\n");
  
  int* p = (int*)malloc(sizeof(int));
  printf("p is %p\n", (void*)p);
  free(p);
  
  exit(0);
}

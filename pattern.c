#include <stdio.h>
int main() {
   int i, j, r=7;
   for (i = 1; i <= r; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}

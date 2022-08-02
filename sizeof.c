#include <stdio.h>

int main() {
   int a, al[10];
   char s;
   char sl;
   int b=10, c=5;
   printf("size of a single character is %lu\n", sizeof(s));
   printf("size of a character array is %lu\n", sizeof(sl));
   printf("size of an integer is %lu\n", sizeof(a));
   printf("size of a long integer is %lu\n", sizeof(long int));
   printf("size of a long long integer is %lu\n", sizeof(long long int));
   printf("size of a integer array is %lu\n", sizeof(al));
   printf("size of a float is %lu\n", sizeof(float));
   printf("size of a double is %lu\n", sizeof(double));
   printf("size of a long double is %lu\n", sizeof(long double));
   printf("size of a b+c is %lu\n", sizeof(b+c));

   return 0;
}

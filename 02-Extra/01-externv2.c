#include <stdio.h>

extern int extVar;

int main(void)
{
   PP
       extVar = 10;
   printf("%3d\n", extVar);
   return 0;
}

#include<stdio.h>
typedef int ainT; //declared a new variable of int data type!
int main ()
{
  printf("TechVidvan Tutorial: Example of typedef keyword!\n\n");
  int a=10;
  ainT b=50,c;
  c = a + b;
  printf ("Sum is: %d", c);
  return 0;
}

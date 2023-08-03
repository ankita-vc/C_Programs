#include<stdio.h>

int Y;             // non initialized global variable.
int Z= 10;         // initialized global variable.

int main()
{
  int A= 10;       //these are all auto local variables. 
  int B;           //all local variables have by default auto storage class.
  auto int C= 11;
  auto int D;

  return 0;
}
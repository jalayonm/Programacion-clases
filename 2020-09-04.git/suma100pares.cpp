#include<iostream>

int main(void)
{
  int suma = 0;
  int n = 0;
  while ( n <= 100 ) { //menores que 100
    if ( n%2 == 0 ) { //si es par
      suma += n;
    }
    n++; // n = n+1
  };
  std::cout << suma << "\n";
  return 0;
}
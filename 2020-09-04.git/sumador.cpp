#include<iostream>

int main(void)
{
  int suma = 0;
  
  for (int n = 0; n <= 102; n++) {
    if( n%2 == 0) { // si es par
      suma += n;
    }
  }
  std::cout << suma << "\n";
  return 0;
}
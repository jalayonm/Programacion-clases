#include<iostream>
#include<cstdlib>

int factorial_loop(int m);
int factorial_recu(int m);
int main(int argc, char **argv){
  int n = std::atoi(argv[1]);//una cadena en un entero
  std::cout << factorial_loop(n) << "\n";
  std::cout << factorial_recu(n) << "\n";
  return 0;
}
int factorial_recu(int m)
{
  if ( m <= 1){
    return 1;
  } else {
    return m*factorial_loop(m-1);
  }
}

int factorial_loop(int m)
{
  int mult=1;
  for (int ii=2 ; ii<= m; ++ii){
    mult = mult *ii;

  }
  return mult;
}

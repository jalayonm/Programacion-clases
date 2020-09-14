// Juan Felipe Marín,Angie Dayan Camargo, Juan Felipe Alayón
#include<iostream>

int main(void)
{
  int n; 
  std::cout << "Hola, escribe un numero por favor >" ;
  std::cin >>n;
  int k = 0;
  while( n!=1 ){
    std::cout << n << " , ";
    if( n%2 == 0 ){
      n = n/2;
      k = k+1 ;
    }
    else {
      n = n*3 +1;
      k = k+1 ;
    }
  }
  if (n = 1){
    std::cout << 1 << "  "<< std::endl;
    std::cout <<"La cantidad de numeros en la serie de Collatz es  "<< k+1 <<std::endl;  
  }
  return 0;
} 
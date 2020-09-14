#include<iostream>

int main(void)
{
  int n; 
  std::cout << "Enter a number >" ;
  std::cin >>n;
  int k = 0;
  while( n!=0 ){
    std::cout << n << " , ";
    if( n%2 == 0 ){
      n = n/2;
      k = k+1 ;
    }
    else {
      n = n*3 +1;
      k = k+1 ;
    }
    if( n== 1){
      break;
    }

  }
  if (n = 1){
    std::cout << 1 << "  "<< std::endl;
    std::cout <<"Hola, la cantidad de numeros es "<< k+1 <<std::endl; 
  }
  return 0;
} 
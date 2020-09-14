#include<iostream>

int main(int argc, char **argv)
{
  int c=90;
  auto flambda = [&c](auto a, auto b){
    std::cout <<"c:"<< c << std::endl;
    c=100;
     return a<b;
     };
  bool flag = flambda (2 , 3.89 );
  std::cout << flag << "\n";
  std::cout << flambda (3.89 , 2);
  return 0;
}
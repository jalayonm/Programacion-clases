#include<iostream>
#include<vector>
#include<algorithm>

int main(int argc, char **argv)
{
  std::vector<int> data={3, 4, -1, -10, 0};//poner vector
  auto comp = [](int a, int b){return a>b; };
  std::sort(data.begin(),data.end(), comp);
  //organizar el algoritmo
  for(int ii=0; ii<5 ; ++ii){
    std::cout<< "data["<< ii <<"]:" <<data[ii] << "\n";
  }

  return 0;
}
#include<iostream>
#include"./../src/add.cpp"

int main(){

  std::vector<int> a = {3,4,5};
  int x = 0;
  
  sum(x,a);

  if(x != 12){
    std::cerr << "ERROR" << std::endl;
    exit(-1);
  }

  std::cout << "OK" << std::endl;
  exit(0);

}

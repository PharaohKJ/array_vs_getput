#include <iostream>

int main( int argc, char *argv[] ){
  int array[5][7];
  for(int i=0; i<5; i++) {
    for(int j=0; j<7; j++) {
      array[i][j] = (i+1)*10+j+1;
    }
  }
  for(int i=0; i<5; i++) {
    for(int j=0; j<7; j++) {
      std::cout << i << "," << j << " = " << array[i][j] << " | ";
    }
    std::cout << std::endl;
  }

  std::cout << "---" << std::endl;

  for(int i=0; i<7; i++) {
    for(int j=0; j<5; j++) {
      std::cout << i << "," << j << " = " << array[j][i] << " | ";
    }
    std::cout << std::endl;
  }

  std::cout << "---" << std::endl;

  int array2[5*7];
  for(int i=0; i<5; i++) {
    for(int j=0; j<7; j++) {
      array2[i*7+j] = (i+1)*10+j+1;
    }
  }

  for(int i=0; i<5; i++) {
    for(int j=0; j<7; j++) {
      std::cout << i << "," << j << " = " << array2[i*7+j] << " | ";
    }
    std::cout << std::endl;
  }

  std::cout << "---" << std::endl;

  for(int i=0; i<7; i++) {
    for(int j=0; j<5; j++) {
      std::cout << i << "," << j << " = " << array2[i*5+j] << " | ";
    }
    std::cout << std::endl;
  }
}

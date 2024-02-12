#include <iostream>
using namespace std;

void whilePrinter(int numberOfPrints){
while (numberOfPrints>1){
  std::cout << "while" << numberOfPrints << endl;
  numberOfPrints= numberOfPrints-1; 
  }
}

void forLoop(int loops){
  for(int i = loops; i >= 0;i--){
  std::cout << "for nr " << loops << endl;
  loops--;
  }
}


int main() {
  whilePrinter(8);
  forLoop(5);
  return 0;
}



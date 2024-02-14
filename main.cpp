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

void weekdayPrinter(int weekDay){
  switch (weekDay) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
}

int main() {
  whilePrinter(8);
  forLoop(5);
  weekdayPrinter(3);
  return 0;
}



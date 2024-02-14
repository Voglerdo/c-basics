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
    cout << "Monday" << endl;
    break;
  case 2:
    cout << "Tuesday"<< endl;
    break;
  case 3:
    cout << "Wednesday"<< endl;
    break;
  case 4:
    cout << "Thursday"<< endl;
    break;
  case 5:
    cout << "Friday"<< endl;
    break;
  case 6:
    cout << "Saturday"<< endl;
    break;
  case 7:
    cout << "Sunday"<< endl;
    break;
}
}

void reference(int &reference) {  
    std::cout << "reference " << reference << endl;
}

int main() {
  int toReference = 187;
  whilePrinter(8);
  forLoop(5);
  weekdayPrinter(3);
  reference(toReference);
  return 0;
}



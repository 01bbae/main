#include <iostream>

using namespace std;

int int main(int argc, char const *argv[]) {
  int number;
  int numberArray[10];
  int index=0;
  for(int i=0;i<10;++i){
    cout << "Enter number" << endl;
    cin >> number;
    if(number > 0){
      number[index]=number;
      index++;
    }
  }
  cout << numberArray << endl;
  return 0;
}

#include <iostream>
#include <string>
#include <array>
//#include "class_demo.h" //user-defined header

using namespace std;


//defining class

class CPSC298Utils{
  public:
    CPSC298Utils(); //default constructor
    int countVowel(string input);

  private:
    //none

};

//implementations

CPSC298Utils::CPSC298Utils(){
  //implement default constructor
}

int CPSC298Utils::countVowel(string input){
  int count=0;
  char c = '\0'; //null

  char Vowels[] = {'a','e','i','o','u'};
  for(int i=0; i<input.size();++i){
    c = tolower(input[i]);
    for(int j=0;j<sizeof(Vowels);++j){
      if(Vowels[j] == c){
        count++;
      }
    }
  }
  return count;
}


int main(int argc, char const *argv[]) {
  CPSC298Utils cp;
  cout <<"On the stack: "<< cp.countVowel("Rene") <<endl;

  CPSC298Utils *cps = new CPSC298Utils();
  cout << "On the heap: " << cps ->countVowel("Rene") << endl;
  delete cps;
  return 0;
}

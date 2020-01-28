//asks user input
//enter num between 0-100
//print grade
//90-100 A ...
//lower than 70 F


#include <iostream>
using namespace std;

int main(){
  double score;
  char grade;
  cout <<  "Enter a score between 1 and a 100."<< endl;
  cin >> score;

  if(score<70){
    grade ='F';
  }else if (score<80){
    grade ='C';
  }else if(score <90){
    grade='B';
  }else{
    grade='A';
  }

  cout << "The grade of the score entered is: " << grade << endl;
  return 0;
}

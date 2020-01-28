//user input 5 quiz scores
//store in an Array
//compute avg
#include <iostream>
#define ARR_SIZE 5
using namespace std;

int main(){
  double quizscore;
  double scoreArray[ARR_SIZE];
  double sum;

  // recieve input, add input to array, and add to sum
  for(int i=0;i<ARR_SIZE;++i){
    cout << "Enter a quiz score: " << endl;
    cin >> quizscore;
    scoreArray[i]=quizscore;
    sum+=quizscore;
  }
  cout << "The average of the scores are: " << sum/ARR_SIZE << endl;
  return 0;
}

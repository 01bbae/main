#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
  if(argc < 2){
    cout << "invalid command line parameters" << endl;
    return 1;
  }

  ifstream inFS; //input file stream
  ofstream outFS;
  string fileNum; //file data
  string fName = argv[1]; //file from cmd line

  cout << "Opening file " << fName <<endl;
  inFS.open(fName);
  outFS.open("output.txt", ios::app); //defaults to overwrite unless you add a option

  if(!inFS.is_open()){
    cout << "Could not open file " << fName << endl;
    return 1;
  }

  cout << "Reading and printing numbers." << endl;

  while(!inFS.eof()){  //eof == end of file
    inFS >> fileNum; //extraction operator
    //outFS << fileNum; //insertion operator
    if(!inFS.fail()){ //fail if something goes wrong
      cout << "num: " << fileNum << endl;
      cout << "writing to file: " << fileNum << endl;
      outFS << fileNum << endl;
    }
  }

  cout << "Closing file " << fName << endl;

  inFS.close(); //always close file stream
  outFS.close(); //always close file stream

  return 0;
}

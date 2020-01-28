#include <iostream>
#include <string>

using namespace std;

class Person{
  public:
    Person(); //Constructor
    Person(string name, int age, string eye_color); //overloaded constructor

    //accessor methods
    string getName();
    int getAge();
    string getEyeColor();

    //mutator methods
    void setName(string name);
    void setAge(int age);
    void setEyeColor(string eye_color);

  private:
    string name;
    unsigned int age;
    string eye_color;

};

Person::Person(){
  //initialize with default values
  name="";
  age=0;
  eye_color="";
}

Person::Person(string name, int age, string eye_color){
  //
  this->name=name;
  this->age=age;
  this->eye_color=eye_color;
}

string Person::getName(){
  return name;
}

int Person::getAge(){
  return age;
}

string Person::getEyeColor(){
  return eye_color;
}

void Person::setName(string name){
  this->name = name;
}

void Person::setAge(int age){
  this->age=age;
}

void Person::setEyeColor(string eye_color){
  this->eye_color=eye_color;
}

int main(int argc, char const *argv[]) {
  Person *p = new Person();
  Person *p2 = new Person("Rene", 37, "blue");

  cout << p2->getName() << endl;
  cout << p2->getAge() << endl;
  cout << p2->getEyeColor() << endl;

  return 0;
}

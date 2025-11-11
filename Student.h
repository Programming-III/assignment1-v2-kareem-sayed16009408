//
// Created by karee on 11/11/2025.
//

#ifndef UNTITLED_STUDENT_H
#define UNTITLED_STUDENT_H
#include "Person.h"
#include <string>
using namespace std;

class Student : Person {
private:
  int yearLevel;
  string major;
  public:
  Student();
  Student (string name, int id, int yearLevel, string major);
  ~Student (){}
  void display();
  int getYearLevel() {
    return yearLevel;
  }
  string getMajor() {
    return major;
  }
};
#endif //UNTITLED_STUDENT_H

//
// Created by karee on 11/11/2025.
//

#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
#include <string>
using namespace std;

class student : Person {
private:
  int year;
  string major;
  public:
  student (string name, int id, int year, string major);
  void display();
};
#endif //STUDENT_H

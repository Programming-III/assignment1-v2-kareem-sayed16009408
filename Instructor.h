#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "Person.h"
#include <string>
using namespace std;

class Instructor : public Person {
private:
    string department;
    int experienceYears;
    public:
    Instructor(string name, int id, string department, int experienceYears);
    ~Instructor(){}
    void display();
    string getDepartment() {
        return department;
    }
    int getExperienceYears() {
        return experienceYears;
    }


};
#endif

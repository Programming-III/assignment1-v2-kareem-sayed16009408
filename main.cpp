
#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string name, int id) {
    this->name = name;
    this->id = id;
}

void Person::display() {
    cout << "Name: " << Person::getName() << endl;
    cout << "ID: " << Person::getId() <<endl;
}


// ==================== Student Class Implementation ====================

Student::Student(string name, int id, int yearLevel, string major): Person(name, id) {
    this->yearLevel = yearLevel;
    this->major = major;
}

void Student::display() {
    cout << "Studnet info:" << endl;
    Person::display();
    cout << "yearLevel: " << Student::getYearLevel()<< endl;
    cout << "major: " << Student::getMajor() << endl;
}







// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string name, int id, string department, int experienceYears):Person(name, id) {
    this->department = department;
    this->experienceYears = experienceYears;

}
void Instructor::display() {
    cout<<"Instructor info:"<<endl;
    Person::display();
    cout<<"department:"<< Instructor::getDepartment()<<endl;
    cout<<"experienceYears: "<< Instructor::getExperienceYears()<< endl;

}








// ==================== Course Class Implementation ====================

Course::Course(string courseCode, string courseName, int maxStudents, Student *students, int currentStudents) {
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->maxStudents = maxStudents;
    this->students = &students[maxStudents];
    this->currentStudents = currentStudents;
}
Course::~Course() {
    delete students;
}

void Course::addStudent(const Student &s) {
    if (Course::getCurrentStudents() >= maxStudents) {
        cout<<" no more room!"<< endl;
        return;
    }
    students[currentStudents++] = s;
}
void Course::displayInfo() {
    cout<<"Course: "<<Course::getCourseCode() << " -" << Course::getCourseName()<< endl;
    cout << "maxStudents: "<< Course::getMaxStudents() << endl;
    cout << "currentStudents Enroled: " << endl;
    for (int  i = 0; i < currentStudents; i++) {
        students[i].display();

    }
}













// ==================== Main Function ====================
int main() {


    return 0;
}

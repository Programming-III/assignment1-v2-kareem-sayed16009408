#ifndef UNTITLED_COURSE_H
#define UNTITLED_COURSE_H
#include <string>
#include "Student.h"
using namespace std;

class Course {
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    Course(string courseCode, string courseName,int maxStudents, Student *students, int currentStudents );
    ~Course();
    void addStudent(const Student& s);
    void displayInfo();
    string getCourseCode() {
        return courseCode;
    }
    string getCourseName() {
        return courseName;
    }
    int getMaxStudents() {
        return maxStudents;
    }
    Student* getStudents() {
        return students;
    }
    int getCurrentStudents() {
        return currentStudents;
    }



};

#endif //UNTITLED_COURSE_H

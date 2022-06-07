#ifndef STUDENT_H
#define STUDENT_H
#include "academic_class.h"
#include "assignment_class.h"
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#include <string>

class Student{
private:
    int assignmentTotalNum; //total number of assignments
    double accumulativeGPA; //total accumulative GPA
    double totalCreditHours; //total number of credit hours user takes
    int studentYear;// user's school year
    string studentName;
public:
//getters
    
    int getAssignmentTotalNum() const;
    double getAccumulativeGPA() const;
    double getTotalCreditHours() const;
    string getStudentName() const;
    int getStudentYear() const;
    
//setters
    void setAssignmentTotalNum(int);
    void setAccumulativeGPA(double);
    void setTotalCreditHours(double);
    void setStudentName(string);
    void setStudentYear(int);
//calculations
    void saveStudent();
    void readStudent();
    void addClass();
    vector<AcademicClass*> listClass;
};

#endif
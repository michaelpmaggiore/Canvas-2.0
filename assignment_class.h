#ifndef ASSIGNMENT_CLASS_H
#define ASSIGNMENT_CLASS_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class AssignmentClass{
private:
    string assignmentDueDate; //When an assignment is due
    string assignmentLetterGrade; //letter grade of assignment
    string assignmentName; // name of assignment
    double assignmentUserScore; // user score for assignment
    double assignmentOutofScore; //max score for assignment
    string assignmentType; // assignment type

public:
//getters
    string getAssignmentLetterGrade() const;
    string getAssignmentName() const;
    double getAssignmentUserScore() const;
    double getAssignmentOutofScore() const;
    string getAssignmentType() const;
//setters
    void setAssignmentLetterGrade();
    void setAssignmentName(string);
    void setAssignmentUserScore(double);
    void setAssignmentOutofScore(double);
    void setAssignmentType(string);
//Other functions
    
};

#endif
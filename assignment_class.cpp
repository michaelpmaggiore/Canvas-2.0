#include "assignment_class.h"
#include "academic_class.h"
#include <iostream>
#include <cmath>
using namespace std;

//getters

    string AssignmentClass::getAssignmentLetterGrade() const{
        return assignmentLetterGrade;
    }
    string AssignmentClass::getAssignmentName() const{
        return assignmentName;
    }
    double AssignmentClass::getAssignmentUserScore() const{
        return assignmentUserScore;
    }
    double AssignmentClass::getAssignmentOutofScore() const{
        return assignmentOutofScore;
    }

    string AssignmentClass::getAssignmentType() const{
        return assignmentType;
    }
//setters

    void AssignmentClass::setAssignmentLetterGrade(){
        double x = (assignmentUserScore/assignmentOutofScore);
        if (x <= 100 && x >= 90){
            assignmentLetterGrade = "A";
        } else if(x <90 && x >=80){
            assignmentLetterGrade = "B";
        } else if(x < 80 && x >=70){
            assignmentLetterGrade = "C";
        } else if(x < 70 && x >= 60){
            assignmentLetterGrade = "D";
        } else{
            assignmentLetterGrade = "F";
        }
    }
    void AssignmentClass::setAssignmentName(string x){
        assignmentName = x;
    }
    void AssignmentClass::setAssignmentUserScore(double x){
        assignmentUserScore = x;
    }
    void AssignmentClass::setAssignmentOutofScore(double x){
        assignmentOutofScore = x;
    }

    void AssignmentClass::setAssignmentType(string x){
        assignmentType = x;
    }
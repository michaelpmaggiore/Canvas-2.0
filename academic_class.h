#ifndef ACADEMIC_CLASS_H
#define ACADEMIC_CLASS_H
#include "assignment_class.h"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

class AcademicClass{
private:
    string className;
    double creditHours = 3; //Class credit hours
    double classAccumulativeGPA; // class overall GPA
    string typeClass; //type of class- biology, physics, etc.
    string classAccumulativeLetterGrade; //total class letter grade
    double classAccumulativePercentageGrade; //total  class percentage grade
    string classNotes; // class notes
    

public:
    vector<string> categoryWeightsName; // categorical grade weight name
    vector<double> categoryWeightsPercentage; // catgeorical grade weight percentage
//getters
    double getCreditHours() const;
    double getAccumulativeGPA() const;
    string getTypeClass() const;
    string getClassAccumulativeLetterGrade() const;
    double getClassAccumulativePercentageGrade() const;
    string getClassNotes() const;
    string getClassName() const;
    vector<string> getCategoryWeightsName() const;
    vector<double> getCategoryWeightsPercentage() const;
//setters
    void setAccumulativeGPA(double);
    void setTypeClass(string);
    void setClassAccumulativeLetterGrade(string);
    void setClassAccumulativePercentageGrade(double);
    void setClassNotes(string);
    void setCategoryWeightsName(vector<string>);
    void setCategoryWeightsPercentage(vector<double>);
    void setClassName(string);
//Actual Functions
    double calculateCurrentGPA();
    vector<AssignmentClass*> listAssignment;
    void addAssignment();
};

#endif
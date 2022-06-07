#include "academic_class.h"
#include "student.h"
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;

//getters
    double AcademicClass::getCreditHours() const{
        return creditHours;
    }
    double AcademicClass::getAccumulativeGPA() const{
        return classAccumulativeGPA;
    }
    string AcademicClass::getTypeClass() const{
        return typeClass;
    }
    string AcademicClass::getClassAccumulativeLetterGrade() const{
        return classAccumulativeLetterGrade;
    }
    double AcademicClass::getClassAccumulativePercentageGrade() const{
        return classAccumulativePercentageGrade;
    }
    string AcademicClass::getClassNotes() const{
        return classNotes;
    }
    vector<string> AcademicClass::getCategoryWeightsName() const{
        return categoryWeightsName;
    }
    vector<double> AcademicClass::getCategoryWeightsPercentage() const{
        return categoryWeightsPercentage;
    }
    string AcademicClass::getClassName() const{
       return className; 
    }
//setters
    void AcademicClass::setAccumulativeGPA(double x){
        classAccumulativeGPA = x;
    }
    void AcademicClass::setTypeClass(string x){
        typeClass = x;
    }
    void AcademicClass::setClassAccumulativeLetterGrade(string x){
        classAccumulativeLetterGrade = x;
    }
    void AcademicClass::setClassAccumulativePercentageGrade(double x){
        classAccumulativePercentageGrade = x;
    }
    void AcademicClass::setClassNotes(string x){
        classNotes = x;
    }
    void AcademicClass::addAssignment(){
        AssignmentClass* newClass = new AssignmentClass;
        listAssignment.push_back(newClass);
    }
    
    void AcademicClass::setClassName(string x){
        className = x;
    }

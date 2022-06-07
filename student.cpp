#include "academic_class.h"
#include "student.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


//getters
    int Student::getAssignmentTotalNum() const{
        return assignmentTotalNum;
    }
    double Student::getAccumulativeGPA() const{
        return accumulativeGPA;
    }
    double Student::getTotalCreditHours() const{
        return totalCreditHours;
    }
    string Student::getStudentName() const{
        return studentName;
    }
    int Student::getStudentYear() const{
        return studentYear;
    }
//setters
    void Student::setAssignmentTotalNum(int x){
        assignmentTotalNum = x;
    }
    void Student::setAccumulativeGPA(double x){
        accumulativeGPA = x;
    }
    void Student::setTotalCreditHours(double x){
        totalCreditHours = x;
    }
    void Student::setStudentName(string x){
        studentName = x;
    }
    void Student::setStudentYear(int x){
        studentYear = x;
    }
//save into a txt file:
    void Student::saveStudent(){
        fstream myFile;
        myFile.open("StudentData.txt");
        if (!myFile.is_open()){
            cout << "Could not open file!" << endl;
        }
        myFile << "burh" << endl;// this is how to write into file;
        myFile.close();
    }

    void Student::readStudent(){
        ifstream myFile;
        myFile.open("StudentData.txt");
        if (!myFile.is_open()){
            cout << "Could not open file!" << endl;
        }
        while (!myFile.eof()){

        }
        myFile.clear();
        myFile.seekg(0,ios::beg);
        myFile.close();
    }

    void Student::addClass(){
        AcademicClass* newClass = new AcademicClass;
        listClass.push_back(newClass);
    }
/* The Gradebook
 *
 * Author: XXXX Michael Maggiore
 * 
 * This is a gradebook program that stores the teacher's students
  grades
 */

#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <cstring>
#include <fstream>
#include "academic_class.h"
#include "assignment_class.h"
#include "student.h"
using namespace std;

//Program is perofrming on a 4.0 GPA scale and by default, each class is 3 credits.
int main(){
    vector<Student*> listStudent;
    ifstream test;
    test.open("StudentData.txt");
    if (!test.is_open()){
        cout << "Creating new file..." << endl;
        test.close();
        ofstream myFile;
        myFile.open("StudentData.txt");
        if (!myFile.is_open()){
            cout << "Could not open file!" << endl;
            return -1;
        
        }
        myFile.close();
    }
    
    
    while(true){
        char flag;
        cout << "Would you like to create a new student?: [y]/[n]" << endl;
        cin >> flag;
        if (flag == 'y'){
            string userName;
            string classType;
            string classDescription;
            double userCreditHours;
            int userYear;
            char flag2;
            string userClassName;
            cout << "Creating new student..." << endl;
            Student* newStudent = new Student;
            cout << "Name of student: ";
            cin >> userName;
            newStudent->setStudentName(userName);
            cout << "Year of student: [1] [2] [3] [4]";
            cin >> userYear;
            newStudent->setStudentYear(userYear);
            cout << "Would you like to add a class to this student: [y]/[n]";
            cin >> flag2;
            if (flag2 == 'y'){
                cout << "Creating new class..." << endl;
                newStudent->addClass();
                cout << "Set Class Name: ";
                cin >> userClassName;
                newStudent->listClass.back()->setClassName(userClassName);
                cout << "Class Type: ";
                cin >> classType;

                newStudent->listClass.back()->setTypeClass(classType);
                cout << "Write class description: ";
                cin >> classDescription;
                newStudent->listClass.back()->setClassNotes(classDescription);
                
                char flag4;
                cout << "Would you like to create an assignment: [y]/[n] " << endl;
                
                cin >> flag4;
                if (flag4 == 'y'){
                    string userAssignmentName;
                    double outScore;
                    double score;
                    string userAssignmentType;

                    cout << "Creating new assignment..." << endl;
                    newStudent->listClass.back()->addAssignment();
                    cout << "Assignment Name: ";
                    cin >> userAssignmentName;
                    newStudent->listClass.back()->listAssignment.back()->setAssignmentName(userAssignmentName);
                    cout << "Assignment Score (out of 100): ";
                    cin >> score;
                    newStudent->listClass.back()->listAssignment.back()->setAssignmentUserScore(score);
                    cout << "Assignment Out of score(out of 100):";
                    cin >> outScore;
                    newStudent->listClass.back()->listAssignment.back()->setAssignmentOutofScore(outScore);
                    cout << "Assignment type(Test, Quiz, or Homework): ";
                    cin >> userAssignmentType;
                    newStudent->listClass.back()->listAssignment.back()->setAssignmentType(userAssignmentType);
                    newStudent->listClass.back()->listAssignment.back()->setAssignmentLetterGrade();

                }
            }

            listStudent.push_back(newStudent);
            fstream new2File;
            new2File.open("StudentData.txt");
            for (int k = 0;k < listStudent.size(); k++){
                new2File << "Student name: " << listStudent.at(k)-> getStudentName() << " Year: " << listStudent.at(k)-> getStudentYear() << endl;
                new2File << "Class name: " << listStudent.at(k)->listClass.back()->getClassName() << endl;
                new2File << "Class Type: " << listStudent.at(k)->listClass.back()->getTypeClass() << endl;
                new2File << "Class Description: " << listStudent.at(k)->listClass.back()->getClassNotes() << endl;
                new2File << "Assignments: " <<  listStudent.at(k)->listClass.back()->listAssignment.back()->getAssignmentName() << endl;
                new2File << "Assignment Grade: " <<  listStudent.at(k)->listClass.back()->listAssignment.back()->getAssignmentLetterGrade() << endl;
                new2File << endl;

            }
           
        }
        char flag5;
        cout << endl << "Would you like to read the data of all your students: [y]/[n]";
        cin >> flag5;
        if (flag5 == 'y'){
            ifstream test;
                test.open("StudentData.txt");
                if (test.is_open()){
                    cout << "Creating new file..." << endl;
                    test.close();
                    ifstream myFile;
                    myFile.open("StudentData.txt");
                    if (!myFile.is_open()){
                        cout << "Could not open file!" << endl;
                        return -1;
                    }
                    for(string line; getline(myFile,line);){
                        cout << line << endl;
                    }
                    myFile.close();
                }
        }
        char flag3;
        cout << "Would you like to continue? [y]/[n]: ";
        cin >> flag3;
        if (flag3 == 'n'){
            break;
        }
    }
    cout << endl << "Exiting program..." << endl << endl;
    return 0;

}
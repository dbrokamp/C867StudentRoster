//
//  roster.cpp
//  C867Assessment
//
//  Created by Drew Brokamp on 1/16/21.
//

#include "roster.h"
#include <iostream>
#include <sstream>
#include <regex>
#include <math.h>
using namespace std;

Roster::Roster() {
    for (int i = 0; i < getStudentDataArray().size(); ++i) {
        addStudentsToRoster(Student(getStudentDataArray().at(i)));
    }
}

void Roster::remove(string studentID) {
    vector<Student> newStudents = getStudents();
    bool foundStudent = false;
    
    for (int i = 0; (i < newStudents.size() && (!foundStudent)); ++i) {
        if (newStudents.at(i).getStudentID() == studentID) {
            cout << "Student removed: " << studentID << endl;
            newStudents.erase(newStudents.begin() + i);
            foundStudent = true;
            --i;
        }
        
    }
    
    students = newStudents;
    
    if (!foundStudent) {
        cout << studentID << " was not found in the class roster." << endl;
    }
    
}

vector<string> Roster::getStudentDataArray() {
    return classRosterArray;
}

void Roster::addStudentsToRoster(Student student) {
    students.push_back(student);
}

void Roster::printStudent(string studentID) {
    for (int i = 0; i < students.size(); i++) {
        if (getStudents().at(i).getStudentID() == studentID) {
            getStudents().at(i).PrintStudentInfo(ALL);
        }
        
    }
}

void Roster::printAll() {
    cout << "All students in roster: " << endl;
    for (int i = 0; i < getStudents().size(); i++) {
        getStudents().at(i).PrintStudentInfo(ALL);
    }
}

void Roster::printInvalidEmails() {
    cout << endl;
    cout << "Invalid emails: " << endl;
    
    const regex emailPattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    
    for (int i = 0; i < getStudents().size(); i++) {
        if (!regex_match(students.at(i).getStudentEmailAddress(), emailPattern)) {
            cout << getStudents().at(i).getStudentEmailAddress() << " is invalid." << endl;;
        }
    
    }
}

vector<Student> Roster::getStudents() {
    return students;
}
    
void Roster::printAverageDaysInCourse(string studentID) {

    int avgDaysInClass = 0.0;
    
    for (int i = 0; i < getStudents().size(); i++) {
        if (getStudents().at(i).getStudentID() == studentID) {
            for (int t = 0; t < getStudents().at(i).getDaysInCourses().size(); t++) {
                avgDaysInClass = avgDaysInClass + getStudents().at(i).getDaysInCourses().at(t);
            }
            avgDaysInClass = ceil(avgDaysInClass / getStudents().at(i).getDaysInCourses().size());
        }
    }
    
    cout << "Student ID: " << studentID << " averages " << avgDaysInClass <<  " days in a course." << endl;
    
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i < getStudents().size(); i++) {
        if (getStudents().at(i).getDegreeProgram() == degreeProgram) {
            getStudents().at(i).PrintStudentInfo(ALL);
        }
    }
}





//
//  student.cpp
//  C867Assessment
//
//  Created by Drew Brokamp on 1/14/21.
//

#include "student.h"
#include <sstream>
#include <iomanip>

Student::Student() {
    
}

// Constructor
Student::Student(string studentInfo) {
    stringstream studentString(studentInfo);
    array<string,9> newStudentInfo;
    vector<int> days;
 
    while(studentString.good()) {
        for (int i = 0; i < 9; i++) {
            getline(studentString, newStudentInfo[i], ',');
        }
    }
    
    setStudentID(newStudentInfo[0]);
    setStudentFirstName(newStudentInfo[1]);
    setStudentLastName(newStudentInfo[2]);
    setStudentEmailAddress(newStudentInfo[3]);
    setStudentAge(stoi(newStudentInfo[4]));
    days.push_back(stoi(newStudentInfo[5]));
    days.push_back(stoi(newStudentInfo[6]));
    days.push_back(stoi(newStudentInfo[7]));
    setDaysInCourses(days);
    setStudentDegreeProgram(newStudentInfo[8]);
    

}

// Setters

void Student::setStudentID(string newStudentID) {
    studentID = newStudentID;
}

void Student::setStudentFirstName(string newFirstName) {
    firstName = newFirstName;
}

void Student::setStudentLastName(string newLastName) {
    lastName = newLastName;
}

void Student::setStudentEmailAddress(string newEmailAddress) {
    emailAddress = newEmailAddress;
}

void Student::setStudentAge(int newAge) {
    studentAge = newAge;
}

void Student::setDaysInCourses(vector<int> days) {
    daysInCourses = days;
}

void Student::setStudentDegreeProgram(string program) {
    if (program == "SECURITY") {
        studentDegree = SECURITY;
    } else if (program == "NETWORK") {
        studentDegree = NETWORK;
    } else if (program == "SOFTWARE") {
        studentDegree = SOFTWARE;
    }
}

// Getters
string Student::getStudentID() {
    return studentID;
}

string Student::getStudentFirstName() {
    return firstName;
}

string Student::getStudentLastName() {
    return lastName;
}

string Student::getStudentEmailAddress() {
    return emailAddress;
}

int Student::getStudentAge() {
    return studentAge;
}

vector<int> Student::getDaysInCourses() {
    return daysInCourses;
}

DegreeProgram Student::getDegreeProgram() {
    return studentDegree;
}

void Student::PrintStudentInfo(StudentInfo info) {
    switch (info) {
        case STUDENTID:
            cout << getStudentID() << endl;
            break;
        case FIRSTNAME:
            cout << getStudentFirstName() << endl;
            break;
        case LASTNAME:
            cout << getStudentLastName() << endl;
            break;
        case EMAIL:
            cout << getStudentEmailAddress() << endl;
            break;
        case AGE:
            cout << getStudentAge() << endl;
            break;
        case DEGREE:
            cout << DegreeProgramPrint(getDegreeProgram()) << endl;
            break;
        case DAYSTOCOMPLETECOURSES:
            for (int i = 0; i < daysInCourses.size(); i ++) {
                cout << "{" << daysInCourses.at(i) << ", ";
                cout << "}" << endl;
            }
        case ALL:
            cout << "Student ID: " << getStudentID() << setw(10);
            cout << "Name: " << getStudentFirstName() << " " << getStudentLastName() << setw(20);
            cout << "Email: " << getStudentEmailAddress() << setw(20);
            cout << "Age: " << getStudentAge() << setw(30);
            cout << "Days In Courses: {";
            for (int i = 0; i < daysInCourses.size(); i ++) {
                if (i == daysInCourses.size() - 1) {
                    cout << daysInCourses.at(i);
                } else {
                    cout << daysInCourses.at(i) << ", ";
                }
    
            }
            cout << "}" << setw(30);
            cout << "Degree Program: " << DegreeProgramPrint(getDegreeProgram()) << setw(10);
            cout << endl;
        default:
            break;

    }
}

string Student::DegreeProgramPrint(DegreeProgram program) {
    string printProgram;
    switch (program) {
        case SECURITY:
            printProgram = "Security";
            break;
        case NETWORK:
            printProgram = "Network";
            break;
        case SOFTWARE:
            printProgram = "Software";
            break;
        default:
            break;
    }
    return printProgram;
}


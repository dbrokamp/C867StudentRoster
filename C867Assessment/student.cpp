//
//  student.cpp
//  C867Assessment
//
//  Created by Drew Brokamp on 1/12/21.
//

#include "student.hpp"

using namespace std;

Student::Student() {
    studentID = "";
    firstName = "";
    lastName = "";
    emailAddress = "";
    studentAge = 0;
    daysToCompleteCourses = {0, 0, 0};
}

Student::Student(string id, string sFirstName, string sLastName, string sEmailAddress, int sAge, array<int,3> toComplete, DegreeProgram degree) {
    studentID = id;
    firstName = sFirstName;
    lastName = sLastName;
    emailAddress = sEmailAddress;
    studentAge = sAge;
    daysToCompleteCourses = toComplete;
    studentDegree = degree;
}

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

void Student::setStudentDegreeProgram(DegreeProgram program) {
    studentDegree = program;
}

void Student::setDaysToCompleteCourses(array<int,3> daysToComplete) {
    daysToCompleteCourses = daysToComplete;
}

string Student::getStudentID() {
    return studentID;
}

string Student::getStudentFirstName() {
    return firstName;
}

string Student::getStudentLastName() {
    return lastName;
}

int Student::getStudentAge() {
    return studentAge;
}

array<int,3> Student::getDaysToCompleteCourses() {
    return daysToCompleteCourses;
}

DegreeProgram Student::getDegreeProgram() {
    return studentDegree;
}

void Student::PrintStudentInfo(StudentInfo info) {
    switch (info) {
        case STUDENTID:
            cout << studentID << endl;
            break;
        case FIRSTNAME:
            cout << firstName << endl;
            break;
        case LASTNAME:
            cout << lastName << endl;
            break;
        case EMAIL:
            cout << emailAddress << endl;
            break;
        case AGE:
            cout << studentAge << endl;
            break;
        case DEGREE:
            cout << studentDegree << endl;
            break;
        case DAYSTOCOMPLETECOURSES:
            for (int i = 0; i < daysToCompleteCourses.size(); i++) {
                cout << daysToCompleteCourses[i] << " ";
            }
            cout << endl;
        case ALL:
            cout << "Student ID: " << studentID << endl;
            cout << "Name: " << firstName << " " << lastName << endl;
            cout << "Email: " << emailAddress << endl;
            cout << "Age: " << studentAge << endl;
            cout << "Degree Program: " << studentDegree << endl;
            cout << "Days to complete 3 classes: ";
            for (int i = 0; i < daysToCompleteCourses.size(); i++) {
                cout << daysToCompleteCourses[i] << " ";
            }
        default:
            break;
            
    }
}








//
//  roster.h
//  C867Assessment
//
//  Created by Drew Brokamp on 1/16/21.
//

#ifndef roster_h
#define roster_h
#include <iostream>
#include <vector>
#include "degree.h"
#include "student.h"
using namespace std;

class Roster {
public:
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(string studentID);
    void printStudent(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    void addStudentsToRoster(Student student);
    vector<string> getStudentDataArray();
    vector<Student> getStudents();
    Roster();
    
private:
    vector<Student> students;
    vector<string> classRosterArray =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Drew,Brokamp,dbroka1@wgu.edu,34,15,18,22,SOFTWARE"};
};

#endif /* roster_h */

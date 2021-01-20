//
//  student.h
//  C867Assessment
//
//  Created by Drew Brokamp on 1/14/21.
//

#ifndef student_h
#define student_h

#include "degree.h"
#include <array>
#include <vector>
using namespace std;

class Student {
public:
        // Setters
        void setStudentID(string newStudentID);
        void setStudentFirstName(string newFirstName);
        void setStudentLastName(string newLastName);
        void setStudentEmailAddress(string emailAddress);
        void setStudentAge(int newAge);
        void setDaysInCourses(vector<int> days);
        void setStudentDegreeProgram(string program);
    
        // Getters
        string getStudentID();
        string getStudentFirstName();
        string getStudentLastName();
        string getStudentEmailAddress();
        int getStudentAge();
        vector<int> getDaysInCourses();
        DegreeProgram getDegreeProgram();
    
        // Print
        void PrintStudentInfo(StudentInfo info);
        string DegreeProgramPrint(DegreeProgram program);

        // Constructor
        Student(string studentInfo);
        Student();
    
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int studentAge;
        vector<int> daysInCourses;
        DegreeProgram studentDegree;
};

#endif /* student_h */


//Student();
//Student(string id, string sFirstName, string sLastName, string sEmailAddress, int sAge, array<int,3> daysToComplete, DegreeProgram degree);
//void PrintStudentInfo(StudentInfo info);
//void DegreeProgramPrint(DegreeProgram program);

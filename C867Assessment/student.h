//
//  student.h
//  C867Assessment
//
//  Created by Drew Brokamp on 1/14/21.
//

#include "degree.h"
#include <array>

#ifndef student_h
#define student_h

class Student {
public:
        void setStudentID(string newStudentID);
        void setStudentFirstName(string newFirstName);
        void setStudentLastName(string newLastName);
        void setStudentEmailAddress(string emailAddress);
        void setStudentAge(int newAge);
        void setDaysToCompleteCourses(array<int,3> daysToComplete);
        void setStudentDegreeProgram(DegreeProgram program);
        string getStudentID();
        string getStudentFirstName();
        string getStudentLastName();
        int getStudentAge();
        array<int,3> getDaysToCompleteCourses();
        DegreeProgram getDegreeProgram();
        Student();
        Student(string id, string sFirstName, string sLastName, string sEmailAddress, int sAge, array<int,3> daysToComplete, DegreeProgram degree);
        void PrintStudentInfo(StudentInfo info);
    private:
        string studentID;
        string firstName;
        string lastName;
        string emailAddress;
        int studentAge;
        DegreeProgram studentDegree;
        array<int,3> daysToCompleteCourses;
};

#endif /* student_h */

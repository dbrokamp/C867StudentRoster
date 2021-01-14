//
//  main.cpp
//  C867Assessment
//
//  Created by Drew Brokamp on 1/12/21.
//
#include "student.hpp"


const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Drew,Brokamp,dbroka1@wgu.edu,34, 20, 20, 20,SOFTWARE" };

int main(int argc, const char * argv[]) {
    
    array<int,3> newStudentDays = { 3, 4, 5};
    
    Student newStudent("A5", "Drew", "Brokamp", "dbroka1@wgu.egu", 34, newStudentDays, SOFTWARE);
    
    newStudent.PrintStudentInfo(ALL);
    
//    classRoster.printAll();
//    classRoster.printInvalidEmails();
//
//    //loop through classRosterArray and for each element:
//    classRoster.printAverageDaysInCourse(/*current_object's student id*/);
//
//    classRoster.printByDegreeProgram(SOFTWARE);
//    classRoster.remove("A3");
//    classRoster.printAll();
//    classRoster.remove("A3");
//    //expected: the above line should print a message saying such a student with this ID was not found
    return 0;
}

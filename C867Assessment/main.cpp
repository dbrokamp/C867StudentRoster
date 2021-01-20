//
//  main.cpp
//  C867Assessment
// 
//  Created by Drew Brokamp on 1/12/21.
//

#include <string>
#include <sstream>
#include "student.h"
#include "roster.h"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "C867: Scripting and Programming - Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 001486248" << endl;
    cout << "Name: Drew Brokamp" << endl;
    cout << endl << endl;

    Roster classRoster;
    classRoster.printAll();
    classRoster.printInvalidEmails();
    cout << endl;
    cout << "Average number of days spent in a class: " << endl;
    for (int i = 0; i < classRoster.getStudents().size(); i++) {
        classRoster.printAverageDaysInCourse(classRoster.getStudents().at(i).getStudentID());
    }
    cout << endl;
    cout << "Students in SOFTWARE degree program: " << endl;
    classRoster.printByDegreeProgram(SOFTWARE);

    cout << endl;
    cout << "Remove student A3." << endl;
    classRoster.remove("A3");
    
    cout << endl;
    classRoster.printAll();
    
    cout << endl;
    cout << "Remove student A3." << endl;
    classRoster.remove("A3");
    
    //TO DO: Implement destructor
    
    return 0;
}





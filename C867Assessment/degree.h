//
//  degree.h
//  C867Assessment
//
//  Created by Drew Brokamp on 1/12/21.
//

#ifndef degree_h
#define degree_h
#include <iostream>
using namespace std;


enum DegreeProgram { SECURITY, NETWORK, SOFTWARE };

void DegreeProgramPrint(DegreeProgram program) {
    switch (program) {
        case SECURITY:
            cout << "Security";
            break;
        case NETWORK:
            cout << "Network";
            break;
        case SOFTWARE:
            cout<< "Software";
            break;
        default:
            break;
    }
};

enum StudentInfo { STUDENTID, FIRSTNAME, LASTNAME, EMAIL, AGE, DEGREE, DAYSTOCOMPLETECOURSES, ALL };

#endif /* degree_h */

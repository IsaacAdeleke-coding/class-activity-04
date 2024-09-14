//
//  main.cpp
//  class-activity-04
//
//  Created by Isaac Adeleke on 9/14/24.
//

#include <iostream>
#include <iomanip>  // For std::setw and std::left/std::right

using namespace std;

int main() {
    // Print the header of the table with left alignment
    cout << left << setw(15) << "Course" << right << setw(10) << "Students" << endl;
    cout << "-----------------------------" << endl;

    // Print the rows with left alignment for the course and right alignment for the student numbers
    cout << left << setw(15) << "C++" << right << setw(10) << 100 << endl;
    cout << left << setw(15) << "JavaScript" << right << setw(10) << 50 << endl;

    return 0;
}

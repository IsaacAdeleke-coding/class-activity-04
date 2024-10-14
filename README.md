# Class Activity 04 - Table Formatting in C++

## Overview

This program demonstrates how to format and align text in C++ using the `iomanip` library, specifically with the `std::setw`, `std::left`, and `std::right` manipulators. The program prints a table with course names and the number of students enrolled in each course.

## Features

- **Formatted Output**: The program uses the `setw` manipulator to define column widths and aligns text to the left and numbers to the right for better readability.
- **Table of Courses and Students**: It prints a simple table with course names and the corresponding number of students.

## Program Breakdown

1. **Header of the Table**:
   - The header row is printed with the course name left-aligned and the number of students right-aligned using `std::left`, `std::right`, and `std::setw`.

2. **Rows with Course Information**:
   - The course names ("C++", "JavaScript") are printed left-aligned, while the number of students (100, 50) is printed right-aligned, creating a clear and organized table.

3. **Use of Manipulators**:
   - The `setw(15)` ensures that the course name column has a fixed width of 15 characters.
   - The `setw(10)` sets a width of 10 characters for the number of students column.
   - `left` and `right` are used to align the course names and student numbers properly.

## Example Output


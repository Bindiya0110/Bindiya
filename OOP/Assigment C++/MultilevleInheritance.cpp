#include <iostream>

class Students {
protected:
    int rollNumber;
public:
    Students() {
        std::cout << "Enter Student Roll Number: ";
        std::cin >> rollNumber;
    }
};

class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;
public:
    Test() {
        std::cout << "Enter Marks in Subject 1: ";
        std::cin >> subject1Marks;
        std::cout << "Enter Marks in Subject 2: ";
        std::cin >> subject2Marks;
    }
};

class Result : public Test {
public:
    Result() {
        int totalMarks = subject1Marks + subject2Marks;
        std::cout << "Student Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks in Subject 1: " << subject1Marks << std::endl;
        std::cout << "Marks in Subject 2: " << subject2Marks << std::endl;
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    Result studentResult;

    return 0;
}


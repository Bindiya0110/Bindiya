#include <iostream>

class Person {
protected:
    std::string name;
    int age;

public:
    void initializePerson(const std::string& pName, int pAge) {
        name = pName;
        age = pAge;
    }

    void readPersonData() {
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Age: ";
        std::cin >> age;
    }

    void writePersonData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    void initializeStudent(float pPercentage) {
        percentage = pPercentage;
    }

    void readStudentData() {
        readPersonData();
        std::cout << "Enter Percentage: ";
        std::cin >> percentage;
    }

    void writeStudentData() {
        writePersonData();
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
protected:
    double salary;

public:
    void initializeTeacher(double pSalary) {
        salary = pSalary;
    }

    void readTeacherData() {
        readPersonData();
        std::cout << "Enter Salary: ";
        std::cin >> salary;
    }

    void writeTeacherData() {
        writePersonData();
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    std::cout << "Enter Student's Data:" << std::endl;
    student.readStudentData();
    std::cout << "\nStudent's Information:" << std::endl;
    student.writeStudentData();

    std::cout << "\nEnter Teacher's Data:" << std::endl;
    teacher.readTeacherData();
    std::cout << "\nTeacher's Information:" << std::endl;
    teacher.writeTeacherData();

    return 0;
}


#include<iostream>
//#include<cstring>
using namespace std;

class MyString {
private:
    char* str;

public:

    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    MyString operator+(const MyString& other) {
        char* newStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    void display() {
        if (str) {
            std::cout << str;
        } else {
            std::cout << "String is empty.";
        }
        std::cout << std::endl;
    }

    ~MyString() {
        if (str) {
            delete[] str;
        }
    }
};

int main() {
    MyString s1("Hello, ");
    MyString s2("world!");

    MyString s3 = s1 + s2;

    std::cout << "Concatenated String: ";
    s3.display();

    return 0;
}

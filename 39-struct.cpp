#include <iostream>
#include <string>

struct Student {
    // properties
    std::string name;
    int age;
    // contructor
    Student() {}
    Student(std::string name, int age) {
        this->name = name;
        this->age = age;
    }
    // method
    void set_name(std::string name) {
        this->name = name;
    }
    void set_age(int age) {
        this->age = age;
    }
    std::string get_name() {
        return this->name;
    }
    int get_age() {
        return this->age;
    }
    void print_info() {
        std::cout << "Name: " << this->name << std::endl;
        std::cout << "Age: " << this->age << std::endl;
    }
};

int main() {
    
    Student student_1("Nguyen van B", 32);
    student_1.print_info();
    student_1.set_name("Nguyen van a");
    student_1.set_age(30);

    std::cout << "Name: " << student_1.get_name() << std::endl;
    std::cout << "Age: " << student_1.get_age() << std::endl;

    return 0;
}
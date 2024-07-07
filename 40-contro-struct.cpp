#include <iostream>
#include <string>

struct Student {
    std::string name;
    int age;
    bool sex;

    Student() {}
    Student(std::string name, int age, bool sex) {
        this->name = name;
        this->age = age;
        this->sex = sex;
    }
};

int main() {
    Student std_1("Long", 21, true);
    Student *std_1_ptr = &std_1;
    std::cout << std_1.name << std::endl;
    std::cout << std_1_ptr->age << std::endl;
    std::cout << (*std_1_ptr).sex << std::endl;
    
    Student *std_2 = new Student("ShenLong", 20, true);
    std::cout<< std_2->name << std::endl;
    // std::cout << (std_2.sex);

    delete std_2;

    return 0;
}
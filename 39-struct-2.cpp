#include <iostream>
#include <string>

struct Date{
    //properties
    int date, month, year;

    //constructor
    Date(){}
    Date(int date, int month, int year) {
        this->date = date;
        this->month = month;
        this->year = year;
    }
    //method
    void print_date(char c='/') {
        std::cout << this->date << c << this->month << c << this->year;
    }

};

struct Student{
    //properties
    std::string name;
    int age;
    Date date;
    Student() {}
    Student(std::string name, int age, Date date) {
        this->name = name;
        this->age = age;
        this->date = date;
    }

    void print_info() {
        std::cout <<"Name: " << this->name << std::endl;
        std::cout <<"Age: " << this->age << std::endl;
        date.print_date(':');
        std::cout << std::endl;
    }
};

int main() {
    // Student std_1("Nguyen Van A", 20, Date(12, 12, 2004));
    // Student std_2("Nguyen Van B", 24, Date(22, 12, 2000));
    // Student std_3("Nguyen Van C", 18, Date(11, 1, 2006));

    Student *students = new Student[3];
    students[0] = Student("Nguyen Van A", 20, Date(12, 12, 2004));
    students[1] = Student("Nguyen Van B", 24, Date(22, 12, 2000));
    students[2] = Student("Nguyen Van C", 18, Date(11, 1, 2006));

    for(int i = 0; i < 3; i ++) {
        students[i].print_info();
    }

    return 0;
}
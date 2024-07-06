#include <iostream>
#include <string>

int main() {

    //(string).substr()
    {
        std::string str_1 = "Hello world";
        std::string str_2 = str_1.substr(2, 3);

        std::cout << "Chuoi cu: " << str_1 << std::endl;
        std::cout << "Chuoi moi: " << str_2 << std::endl;
    }
    //(string).find(s) => index (int)
    {
        std::string str_1 = "Hello world";
        std::cout << str_1.find("lo") << std::endl;
    }
    //(string).erase(x, n)
    {
        std::string str_1 = "Hello world";
        std::cout << str_1.erase(3, 3) << std::endl;
    }
    //(string).replace(x, n, s)
    {
        std::string str_1 = "Hello world";
        std::cout << str_1.replace(2, 3, "***") << std::endl;
    }
    //(string).compare(s)
    {
        std::string str_1 = "Hello world";
        std::string str_2 = "Hello world1";
        // return 0: str_1 = str_2; return 1: str_1 < str_2; return -1: str_1 > str_2
        // str_1 == str_2 != str_1.compare(str_2)
        std::cout << (bool) str_1.compare(str_2) << std::endl;
    }
    //(string).insert(x, s)
    {
        std::string str_1 = "Hello world";
        std::string str_2 = str_1.insert(5, " my");
        std::cout << "Chuoi moi: " << str_2 << std::endl;
    }
    //string.size(); (string).length(); <= Đếm tổng số byte (ASCII)
    {
        std::string str_1 = "Hello world";
        std::cout << "Do dai chuoi: " << str_1.length() << std::endl;
        std::cout << "Do dai chuoi: " << str_1.size() << std::endl;

    }

    return 0;
}
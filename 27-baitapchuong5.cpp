#include <iostream>
#include <string>

int bai1() {
    std::string str = "      f8 fullstack     ";
    while(str[0] == ' ') {
        str.erase(0, 1);
    }
    while(str[str.length() - 1] == ' ') {
        str.erase(str.length() - 1, 1);
    }
    std::cout << str << std::endl;
    return 0;
}

int bai2() {
    std::string str;
    getline(std::cin, str);
    
    for(int i = 0; i < str.length(); i ++) {
        if(str[i] == ' ') {
            int j = i + 1;
            while(str[j] == ' ') {
                str.erase(i + 1, 1);
            }
        }
    }
    std::cout << str << std::endl;
    return 0;
}

int bai3() {
    std::string str = "viet chuong trinH nhAp vao chuoi";
    str[0] = (char) str[0] - 32;
    for(int i = 1; i < str.length(); i ++) {
        if((int) str[i] > 64 && (int) str[i] < 91) {
            str[i] = int(str[i]) + 32;
        }
        if(str[i - 1] == ' ') {
            str[i] = str[i] - 32;
        }
    }

    std::cout << str;

    return 0;
}

int bai4() {
    std::string str = "    bUI   duC   LONG                 ";
    while(str[0] == ' ') str.erase(0,1);
    while(str[str.length() -1] == ' ') str.erase(str.length() - 1, 1);
    if((int)str[0] > 96 && (int)str[0] < 123) str[0] = (char) str[0] - 32;

    for(int i = 1; i < str.length(); i ++) {
        if(str[i] == ' ') {
            int j = i + 1;
            while(str[j] == ' ') str.erase(j, 1);
        }
        if((int) str[i] > 64 && (int) str[i] < 91) {
            str[i] = int(str[i]) + 32;
        }
        if(str[i - 1] == ' ') {
            str[i] = str[i] - 32;
        }
    }

    std::cout << str << std::endl;

    return 0;
}

int main() {
    bai2();
    return 0;
}
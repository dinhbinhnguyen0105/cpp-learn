#include <iostream>
#include <string>

int bai1() {
    std::string str = "      f8 fullstack     ";
    while(str[0] == ' ') {
        str = str.erase(0, 1);
    }
    while(str[str.length() - 1] == ' ') {
        str = str.erase(str.length() - 1, 1);
    }
    return 0;
}

int bai2() {
    std::string str = "f8   fullstack";

    for(int i = 0; i < str.length(); i ++) {
        if(str[i] == ' ') {
            
        }
    }

    return 0;
}


int main() {

    return 0;
}
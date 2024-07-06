#include <iostream>

int main() {
    {
        int i = 3;
        while(i >= 0) {
            std::cout << i << std::endl;
            i--;
        }
    }

    {
        for(int i = 0; i < 10; i ++) {
        if(i == 6) continue;
        std::cout << i << std::endl;
        }
    }

    {
        int i = 0;
        try_agin:
        std::cout << i << std::endl;
        i++;
        if(i < 3) goto try_agin;
    }


    return 0;
}
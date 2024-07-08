#include <iostream>

struct Point{
    int x, y;
    Point() {}
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }

    friend std::istream& operator>>(std::istream &is, Point &p) {
        std::cout << "x = "; is >> p.x;
        std::cout << "y = "; is >> p.y;
        return is;
    };

    friend std::ostream& operator<<(std::ostream &os, Point p) {
        os << "x = " << p.x << ", y = " << p.y;
        return os;
    };

    friend Point operator+(Point p1, Point p2) {
        Point *p3 = new Point(p1.x + p2.x, p1.y + p2.y);
        return *p3;
    }
    friend bool operator&&(Point p1, Point p2) {
        if(p1.x == p2.x && p1.y == p2.y) return true;
        return false;
    }
    
};

int main() {
    Point p1;
    Point p2;
    std::cin >> p1;
    std::cin >> p2;

    Point p3 = p1 + p2;
    std::cout << p3 <<std::endl;

    std::cout<< "p1 == p2? " << (p1 && p2);
    return 0;
}
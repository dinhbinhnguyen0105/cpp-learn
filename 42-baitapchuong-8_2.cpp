#include <iostream>
#include <string>

struct Item {
    std::string name;
    float price;
    int quantity;

    friend std::istream& operator>>(std::istream &is, Item &item) {
        std::cout << "Ten san pham: ";
        getline(is, item.name);
        std::cout << "Gia: ";
        is >> item.price;
        is.ignore();
        std::cout << "So luong: ";
        is >> item.quantity;
        is.ignore();

        return is;
    }

    friend std::ostream& operator<<(std::ostream &os, Item item) {
        os << "Ten san pham: " << item.name << "; " << "Gia: " << item.price << "; " << "So luong: " << item.quantity << std::endl;
        return os;
    }
};

struct Manager{
    int length;
    Item *list_items;

    Manager(): length(0), list_items(new Item[0]) {}

    Item add_item(Item x) {
        Item *new_list_items = new Item[length + 1];
        for(int i = 0; i < length; i ++) {
            new_list_items[i] = list_items[i];
        }
        new_list_items[length] = x;
        delete[] list_items;
        list_items = new_list_items;
        length += 1;
        return *list_items;
    }
    void print_items() {
        for(int i = 0; i < length ; i ++) {
            std::cout << list_items[i] << std::endl;
        }
    }
    Item get_items() {
        return *list_items;
    }
};

int main() {
    Item item1;
    Item item2;
    // Item item3;
    Manager *manager1 = new Manager;
    std::cin >> item1;
    std::cin >> item2;
    // std::cin >> item3;
    

    manager1->add_item(item1);
    manager1->add_item(item2);
    manager1->print_items();
    // manager1->add_item(item3);
    // Item *listitem = manager1->get_items();
    // for(int i = 0; i < manager1->length; i ++) {
    //     std::cout << 
    // }


    return 0;
}
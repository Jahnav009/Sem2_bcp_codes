#include <iostream>
using namespace std;

class ClassItem {
public:
    int item_number;
    float item_cost;
    void put_data() {
        cout << "Item Number: " << item_number << endl;
        cout << "Item Cost:" << item_cost << endl;
    }
};
void get_data(ClassItem &item) {
    cout << "Enter the item number: ";
    cin >> item.item_number;
    cout << "Enter the item cost:";
    cin >> item.item_cost;
}
int main() {
    ClassItem item;
    get_data(item);
    item.put_data();
    return 0;
}
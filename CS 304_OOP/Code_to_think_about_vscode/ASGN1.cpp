// VU ID BC220413177
#include <iostream>
using namespace std;

class ShoppingList {
private:
    string Items[100];
    int ItemCount;

public:
    ShoppingList() : ItemCount(0) {}

    void addItem(string item) {
        if (ItemCount < 100) {
            Items[ItemCount] = item;
            ItemCount++;
            cout << item << " added to the shopping list.\n\n";
        } else {
            cout << "Shopping list is full. Cannot add more items.\n\n";
        }
    }

    void removeItem(int index) {
        if (index > 0 && index <= ItemCount) {
            cout << Items[index - 1] << " removed from the shopping list.\n\n";
            for (int j = index - 1; j < ItemCount - 1; j++) {
                Items[j] = Items[j + 1];
            }
            ItemCount--;
        } else {
            cout << "Invalid index. No item removed.\n\n";
        }
    }

    void viewList() {
        if (ItemCount == 0) {
            cout << "Shopping list is empty.\n\n";
        } else {
            cout << "Items in the shopping list:\n";
            for (int i = 0; i < ItemCount; i++) {
                cout << i + 1 << ". " << Items[i] << "\n";
            }
            cout << "\n";
        }
    }

    void clearList() {
        ItemCount = 0;
        cout << "Shopping list cleared.\n\n";
    }
};

int main() {
    ShoppingList shoppingList;
    int choice, index;
    string item;

    cout << "\t\'Welcome To The Shopping List Manager\'\n\n";

    do {
        cout << "1. Add item\n";
        cout << "2. Remove item\n";
        cout << "3. View list\n";
        cout << "4. Clear list\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item to add: ";
                cin >> item;
                shoppingList.addItem(item);
                break;
            case 2:
                cout << "Enter item index to remove: ";
                cin >> index;
                shoppingList.removeItem(index);
                break;
            case 3:
                shoppingList.viewList();
                break;
            case 4:
                shoppingList.clearList();
                break;
            case 5:
                cout << "\n\tExiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}



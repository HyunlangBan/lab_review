//Todo List
#include <iostream>
using namespace std;

int main()
{
    const int CAPACITY = 3;
    string toDo[CAPACITY];
    bool completed[CAPACITY];
    int size = 0;
    char userChoice;
    int index;

    while (true)
    {
        cout << "Choose a menu what you want([a]dd an item, [m]ark as done, list the [u]ndone items, list the d[o]ne items, [l]ist of all items, [d]elete an item, [q]uit: " << endl;
        cin >> userChoice;
        cin.ignore();

        if (userChoice == 'a')
        {
            if (size == CAPACITY)
            {
                cout << "The list is fulled. You can't add items more." << endl;
                continue;
            }
            cout << "Add an item to list: " << endl;
            getline(cin, toDo[size]);
            completed[size]=false;
            size++;
        }
        else if (userChoice == 'm')
        {
            cout << "Enter the index of item what you want to mark as done: " << endl;
            cin >> index;
            if (index<size && index >= 0 && index < CAPACITY)
            {
                completed[index] = true;
            }
            else
            {
                cout << "That's invalid index. Try again." << endl;
            }
        }
        else if (userChoice == 'u')
        {
            cout << "The undone items list: " << endl;
            for (int i = 0; i < size; i++)
            {
                if (completed[i] == false)
                {
                    cout << "[" << i << "] " << toDo[i] << endl;
                }
            }
        }
        else if (userChoice == 'o')
        {
            cout << "The done items list: " << endl;
            for (int i = 0; i < size; i++)
            {
                if (completed[i] == true)
                {
                    cout << "[" << i << "] " << toDo[i] << endl;
                }
            }
        }
        else if (userChoice == 'l')
        {
            for (int i = 0; i < size; i++)
            {
                cout << "[" << i << "] " << toDo[i] << ": " << completed[i] << endl;
            }
        }
        else if (userChoice == 'd')
        {
            cout << "Enter the index of item what you want to delete: " << endl;
            cin >> index;
            if (index<size && index >= 0 && index < CAPACITY)
            {
                for (int i = (index + 1); i < size; i++)
                {
                    toDo[i - 1] = toDo[i];
                    completed[i - 1] = completed[i];
                }
                size--;
            }
            else
            {
                cout << "That's invalid index. Try again." << endl;
            }
        }
        else if (userChoice == 'q')
        {
            break;
        }
        else
        {
            cout << "That's invalid option. Please try again." << endl;
            continue;
        }
    }
    return 0;
}
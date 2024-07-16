#include <iostream>

using namespace std;

int main()
{
    int a, b;

    char variableZ;

    cout << "Enter the first number:" << endl;

    cin >> a;

    cout << "Enter second number:" << endl;

    cin >> b;

    cout << "Enter + for addition" << endl;

    cout << "Enter - for subtraction" << endl;

    cout << "Enter * for multiplication" << endl;

    cout << "Enter / for division" << endl;

    cout << "Enter % for modulus" << endl;

    cin >> variableZ;

    switch(variableZ)
    {
        case '+':
            cout << "Add:" << (a + b) << endl;
            break;

        case '-':
            cout << "Subtract:" << (a - b) << endl;
            break;

        case '*':
            cout << "Multiply:" << (a * b) << endl;
            break;

        case '/':
            cout << "Divide:" << (a / b) << endl;
            break;

        case '%':
            cout << "Modulus:" << (a % b) << endl;
            break;

        default:
            cout << "Not valid:" << endl;
            break;

    }
    return 0;
}

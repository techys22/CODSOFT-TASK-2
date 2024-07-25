#include <iostream>

void showMenu() {
    std::cout << "Simple Calculator\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Exit\n";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cerr << "Error: Division by zero.\n";
        return 0;
    }
    return a / b;
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;

            switch (choice) {
                case 1:
                    std::cout << "Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << "\n";
                    break;
                case 2:
                    std::cout << "Result: " << num1 << " - " << num2 << " = " << subtract(num1, num2) << "\n";
                    break;
                case 3:
                    std::cout << "Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << "\n";
                    break;
                case 4:
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << divide(num1, num2) << "\n";
                    break;
            }
        } else if (choice == 5) {
            std::cout << "Exiting the calculator.\n";
            break;
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

// ================= ATM CLASS =================
class ATM {
private:
    double balance;

public:
    // Constructor
    ATM(double initialBalance = 0.0) {
        balance = initialBalance;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful!" << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful!" << endl;
        }
    }

    // Check balance
    void checkBalance() const {
        cout << "Current Balance: " << balance << endl;
    }
};

// ================= CONTROLLER CLASS =================
class ATMController {
private:
    ATM atm;

public:
    ATMController(double initialBalance) : atm(initialBalance) {}

    void start() {
        int choice;
        double amount;

        do {
            cout << "\n====== ATM MENU ======" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    atm.checkBalance();
                    break;

                case 2:
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    atm.deposit(amount);
                    break;

                case 3:
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    atm.withdraw(amount);
                    break;

                case 4:
                    cout << "Thank you for using the ATM!" << endl;
                    break;

                default:
                    cout << "Invalid choice! Try again." << endl;
            }

        } while (choice != 4);
    }
};

// ================= MAIN FUNCTION =================
int main() {
    ATMController controller(1000.0);  // Initial balance = 1000
    controller.start();
    return 0;
}


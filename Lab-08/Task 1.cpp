
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void calculateFee() = 0;
};

class BankTransfer : public Payment {
    int amount;

public:
    BankTransfer(int a) {
        amount = a;
    }

    void calculateFee() {
        cout << "Bank Transfer Fee: "
             << amount * 2 / 100 << endl;
    }
};

class DigitalWallet : public Payment {
    int amount;

public:
    DigitalWallet(int a) {
        amount = a;
    }

    void calculateFee() {
        cout << "Digital Wallet Fee: "
             << amount * 1 / 100 << endl;
    }
};

int main() {
    BankTransfer b(10000);
    DigitalWallet d(10000);

    b.calculateFee();
    d.calculateFee();

    return 0;
}

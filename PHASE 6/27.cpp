#include <iostream>
using namespace std;

// Base class representing a Bank
class Bank {
protected:
    float rateOfInterest;

public:
    Bank(float roi) : rateOfInterest(roi) {}

    virtual float getRateOfInterest() {
        return rateOfInterest;
    }
};

// Derived class for a Private Sector Bank
class PrivateSectorBank : public Bank {
public:
    PrivateSectorBank(float roi) : Bank(roi) {}

    float getRateOfInterest() override {
        return rateOfInterest + 1.0f; // Adding 1% additional ROI for private sector banks
    }
};

int main() {
    // Creating objects of Bank and PrivateSectorBank
    Bank* publicBank = new Bank(5.0f); // Public sector bank with predefined ROI of 5%
    PrivateSectorBank* privateBank = new PrivateSectorBank(6.0f); // Private sector bank with custom ROI of 6%

    // Displaying ROI for both banks
    cout << "ROI for Public Sector Bank: " << publicBank->getRateOfInterest() << "%" << endl;
    cout << "ROI for Private Sector Bank: " << privateBank->getRateOfInterest() << "%" << endl;

    delete publicBank;
    delete privateBank;

    return 0;
}


#include "Employee.h"

class Personal : public Employee {
public:
    Personal(int id, const string& name, double hourlyRate);
    virtual ~Personal();

    double calcBase(double hourlyRate, double hours);

    virtual double calcBonus();

    void calc() override;
    void printInfo() const override;
    string getPosition() const override;
    string getProjectName() const override;
};
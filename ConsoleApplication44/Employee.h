#include <string>
#include "Project.h"
using namespace std;

class Employee {
protected:
    int id;
    string name;
    double worktime;
    double payment;
    double hourlyRate;

public:
    Employee(int id, const string& name, double hourlyRate);
    virtual ~Employee();

    int getId() const;
    string getName() const;
    double getWorktime() const;
    double getPayment() const;
    double getHourlyRate() const;

    void setWorktime(double hours);

    virtual void calc() = 0;
    virtual void printInfo() const = 0;
    virtual string getPosition() const = 0;
    virtual string getProjectName() const = 0;
};
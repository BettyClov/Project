#include "Employee.h"
#include <iostream>
#include <iomanip> 

Employee::Employee(int id, const string& name, double hourlyRate)
    : id(id), name(name), worktime(0), payment(0), hourlyRate(hourlyRate) {
}

Employee::~Employee() {}

int Employee::getId() const { return id; }

string Employee::getName() const { return name; }

double Employee::getWorktime() const { return worktime; }

double Employee::getPayment() const { return payment; }

double Employee::getHourlyRate() const { return hourlyRate; }

void Employee::setWorktime(double hours) {
    worktime = hours;
}
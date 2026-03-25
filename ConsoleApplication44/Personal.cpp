#include "Personal.h"
#include <iostream>
#include <iomanip>

Personal::Personal(int id, const string& name, double hourlyRate)
    : Employee(id, name, hourlyRate) {
}

Personal::~Personal() {}
double Personal::calcBase(double hourlyRate, double hours) {
    return hourlyRate * hours;
}


double Personal::calcBonus() {
    return 0;
}
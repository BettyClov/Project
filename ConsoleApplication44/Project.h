#include <string>
using namespace std;

struct Project {
    string name;
    double budget;

    Project() : name(""), budget(0) {}
    Project(const string& n, double b) : name(n), budget(b) {}
};

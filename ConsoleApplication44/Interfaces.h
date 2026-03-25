class WorkBaseTime {
public:
    virtual double calcBase(double hourlyRate, double hours) = 0;
    virtual double calcBonus() = 0;
    virtual ~WorkBaseTime() {}
};

class ProjectBudget {
public:
    virtual double calcBudgetPart(double part, double budget) = 0;
    virtual double calcProAdditions() = 0;
    virtual ~ProjectBudget() {}
};

class Heading {
public:
    virtual double calcHeads(int subordinatesCount) = 0;
    virtual ~Heading() {}
};
#include "Personal.h"
#include "Project.h"

class Engineer : public Personal {
protected:
    Project* project;

public:
    Engineer(int id, const string& name, double hourlyRate, Project* proj = nullptr);
    virtual ~Engineer();

    void setProject(Project* proj);
    Project* getProject() const;

    void calc() override;
    string getProjectName() const override;

    virtual double calcBonusFromProject() = 0;
};

class Programmer : public Engineer {

public:
    Programmer(int id, const string& name, double hourlyRate, Project* proj = nullptr);

    double calcBonusFromProject() override;
    void setCodeBonus(double bonus);

    void calc() override;
    string getPosition() const override;
};

class Tester : public Engineer {
private:
    int bugsFound;
    double bugBonus;

public:
    Tester(int id, const string& name, double hourlyRate, Project* proj = nullptr);

    double calcBonusFromProject() override;
    void setBugsFound(int bugs);
    void setBugBonus(double bonus);

    void calc() override;
    string getPosition() const override;
};

class LeaderOfTeam : public Programmer {
private:
    int subordinatesCount;
    double headBonusRate;

public:
    LeaderOfTeam(int id, const string& name, double hourlyRate, Project* proj = nullptr);

    double calcHeads(int subordinatesCount);
    void setSubordinatesCount(int count);
    void setHeadBonusRate(double rate);

    void calc() override;
    string getPosition() const override;
};
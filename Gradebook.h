#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include "Grade.h"
#include <sstream>
#include <vector>
#include <map>

class Gradebook {
public:
    Gradebook();
    void readResults(std::istream & ist);
    void printResults(std::ostream & ost) const;

private:
    std::map<std::string, std::vector<Grade>> mGrades;
};

#endif // GRADEBOOK_H

#include "Gradebook.h"

Gradebook::Gradebook() {
}

void Gradebook::readResults(std::istream& ist) {
    std::string line;
    float weight;
    std::getline(ist, line);
    std::istringstream(line) >> weight;

    while (std::getline(ist, line)) {
        if (line.empty())
            continue;

        std::string username;
        int point;
        std::istringstream(line) >> username >> point;

        mGrades[username].push_back(Grade(point, weight));
    }
}

void Gradebook::printResults(std::ostream& ost) const {
    for (const auto& entry : mGrades) {
        ost << entry.first << " ";

        float totalWeightedSum = 0.0;
        for (const Grade& grade : entry.second) {
            ost << "(" << grade.getPoint() << " " << grade.getWeight() << ") ";
            totalWeightedSum += grade.weightedGrade();
        }

        ost << totalWeightedSum << std::endl;
    }
}

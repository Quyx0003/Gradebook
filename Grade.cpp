#include "Grade.h"

Grade::Grade(int point, float weight) : mPoint(point), mWeight(weight) {
}

int Grade::getPoint() const {
    return mPoint;
}

float Grade::getWeight() const {
    return mWeight;
}

float Grade::weightedGrade() const {
    return mPoint *mWeight / 100;
}

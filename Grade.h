#ifndef GRADE_H
#define GRADE_H

class Grade {
public:
    Grade(int point = 0, float weight = 100);

    int getPoint() const;
    float getWeight() const;
    float weightedGrade() const;

private:
    int mPoint;       
    float mWeight;    
};

#endif // GRADE_H

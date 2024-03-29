#include <iostream>
#include <vector>
#include "quadric_education.h"

std::vector<float> solve_education(float& a, float& b, float& c) {
    float discriminant = pow(-b, 2) - 4 * a * c;
    std::vector<float> roots;

    if (discriminant > 0) {

        roots.push_back((-b + sqrt(discriminant)) / (2 * a));
        roots.push_back((-b - sqrt(discriminant)) / (2 * a));

        return roots;

    }
    else if (discriminant == 0) {
        roots.push_back((-b + sqrt(discriminant)) / (2 * a));
        roots.push_back(roots[0]);

        return roots;
    }
    else
    {
        return roots;
    }
}


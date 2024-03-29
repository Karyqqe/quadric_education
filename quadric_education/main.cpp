
#include <iostream>
#include <vector>
#include "quadric_education.h"
int main()
{
    float* a = { new float{5} };
    float* b = { new float{-6} };
    float* c = { new float{1} };
    std::vector<float> result = solve_education(*a, *b, *c);
    for (int i = 0; i < result.size(); i++) {
        std::cout << "root_" << i + 1 << ": " << result[i] << std::endl;
    }
    delete a;
    delete b;
    delete c;

    return 0;
   
}


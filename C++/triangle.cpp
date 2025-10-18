#include "triangle.h"

#include <stdexcept>

namespace triangle {

// TODO: add your solution here

flavor kind(double s1, double s2, double s3){
    if (s1 == 0 || s2 == 0 || s3 == 0)
        throw std::domain_error("Error (invalid triangle): some side is 0");

    if (s1 + s2 < s3 || s3 + s2 < s1 || s1 + s3 < s2)
        throw std::domain_error("Error (invalid triangle): some equation evaluated false");

    if (s1 == s2){
        if (s1 != s3)
            return flavor::isosceles;
    } else {
        return s3 == s1 || s3 == s2 ? flavor::isosceles : flavor::scalene;
    }
    return flavor::equilateral;
}

}  // namespace triangle


#pragma once

namespace triangle {

// TODO: add your solution here

enum flavor {
    equilateral, 
    isosceles, 
    scalene
};

flavor kind(double s1, double s2, double s3);

}  // namespace triangle


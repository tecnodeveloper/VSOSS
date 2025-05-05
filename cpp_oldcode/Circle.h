//! Separate header file contain class of OOP_practice
#ifndef Circle_H
#define Circle_H
#define PI 3.14159265358979
#include<cmath>
    class Circle
    {
        public:
        float area(float rad)
        {
            r = rad;
            float a = PI*pow(r,2);
            return a;
        }
        float circumference()
        {
            float c = 2 * PI * r;
            return c;
        }
        private:
        float r;
    };
#endif
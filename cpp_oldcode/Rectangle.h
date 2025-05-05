#ifndef Rectangle_H
#define Rectangle_H

    class Rectangle
    {
        public:
        float setArea(float le,float wi)
        {
            length = le;
            width = wi;
            return length * width;
        }
        float setPerimeter()
        {
            return (length + width)*2;
        }
        private:
        float length, width;
    };
#endif
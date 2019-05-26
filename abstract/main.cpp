//
// Created by mcsheng on 2019-05-26.
//

#include <iostream>

using namespace std;

class Shape {
public:
    explicit Shape(int width = 0, int height = 0) {
        mWidth = width;
        mHeight = height;
    }

    virtual float getArea() = 0;

    void setWidth(int width) {
        mWidth = width;
    }

    void setHeight(int height) {
        mHeight = height;
    }

    int getWidth() {
        return mWidth;
    }

    int getHeight() {
        return mHeight;
    }

protected:
    int mWidth;
    int mHeight;
};

/**
 * 长方形
 */
class Rectangle : public Shape {
public:
    Rectangle(int width, int height) : Shape(width, height) {

    }
    float getArea() override {
        return mWidth * mHeight;
    }
};


/**
 * 直角三角形
 */
class Triangle : public Shape{
public:

    Triangle(int width, int height) {
        mWidth = width;
        mHeight = height;
    }

    float getArea() override {
        return (1.0f * mWidth * mHeight) / 2;
    }

};

int main() {
    Rectangle rectangle(10, 10);
    Triangle triangle(10, 10);

    cout << "Rectangle --> width=" << rectangle.getWidth()
        << "; height=" << rectangle.getHeight() << "; area=" << rectangle.getArea() << endl;


    cout << "Triangle --> width=" << triangle.getWidth()
         << "; height=" << triangle.getHeight() << "; area=" << triangle.getArea() << endl;

}

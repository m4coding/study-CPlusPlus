//
// Created by mcsheng on 2019-05-25.
//

#include <cstring>
#include "MoreRectangle.h"



int MoreRectangle::getArea() {
    return mWidth * mHeight;
}

int MoreRectangle::getId() {
    return mId;
}

MoreRectangle::MoreRectangle(int id) {
    MoreRectangle("", id);  //错误定义操作。。。。。其实只是定义了一个对象而已
}

MoreRectangle::MoreRectangle(const char *name, int id) {
    mId = id;

    if (strcmp(name, "") == 0) {
        mName = "default name";
    } else {
        mName = name;
    }
}

const char *MoreRectangle::getName() {
    return mName;
}

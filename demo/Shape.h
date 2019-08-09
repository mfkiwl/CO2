//
// Created by liuxi on 2019/8/8.
//

#ifndef CO2_SHAPE_H
#define CO2_SHAPE_H

#include "../co2/include/all.h"

struct Shape {
    struct ShapeClass * class;
    struct Object super;
};

struct ShapeClass {
    size_t size;
    struct ObjectClass* super_class;
    method_declare(void,ctor)(struct Shape* self, va_list* val);
    method_declare(void,dtor)(struct Shape* self);
};

struct ShapeClass * GetShapeClass();


#endif //CO2_SHAPE_H
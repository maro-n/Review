
#include "Object.h"

Object::Object(){};

Vec2f Object::getPos(){
  return pos_;
}

Vec2f Object::getSize(){
  return size_;
}

Vec2f Object::getDirection(){
  return direction_;
}
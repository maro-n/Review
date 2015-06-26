
#pragma once
#include "common.h"
#include "Object.h"

class Bullet : public Object
{
private:

public:
  Bullet();
  ~Bullet();

  void update();
  void draw();
};

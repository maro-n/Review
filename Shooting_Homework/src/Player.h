
#pragma once
#include "common.h"
#include "Object.h"

class Player : public Object
{
private:

public:
  Player();
  ~Player();

  void update();
  void draw();
};

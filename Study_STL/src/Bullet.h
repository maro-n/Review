
#pragma once
#include "common.h"
#include "Object.h"

class cBullet : public cObject{
private:
  gl::Texture bullet_image;

  Vec2f pos;
  Vec2f rotate;

public:
  cBullet();
  void setup();
  void update();
  void draw();
};

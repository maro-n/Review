
#pragma once
#include "common.h"
#include "Object.h"

class cPlayer : public cObject{
private:
  gl::Texture player_image;

  Vec2f pos;
  Vec2f rotate;

public:
  cPlayer();
  void setup();
  void update();
  void draw();
};

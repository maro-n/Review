
#pragma once
#include "common.h"

class cObject;
typedef std::shared_ptr<cObject> cObjectSP;

class cObject{
private:
  std::list<cObject> m_obj;

public:
  cObject();
  void setup();
  void update();
  void draw();
  void create();
};

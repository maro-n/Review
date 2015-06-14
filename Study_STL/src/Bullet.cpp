
#include "Bullet.h"

cBullet::cBullet(){
  pos = Vec2f(0, 0);
  rotate = Vec2f(0, 0);
}

void cBullet::setup(){
  bullet_image = loadImage(loadAsset("shot.png"));
}

void cBullet::update(){

}

void cBullet::draw(){
  bullet_image.bind();
  gl::draw(bullet_image);
  bullet_image.unbind();
}

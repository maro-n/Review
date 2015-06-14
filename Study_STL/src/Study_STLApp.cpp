
#include "common.h"
#include "Player.h"
#include "Bullet.h"

class Study_STLApp : public AppNative {
private:
  cPlayer player;
  cBullet bullet;

public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void Study_STLApp::setup()
{
  gl::enable(GL_TEXTURE_2D);

  gl::enableDepthRead();
  gl::enableDepthWrite();

  // ブレンディング有効
  gl::enableAlphaBlending(true);

  player.setup();
  bullet.setup();
}

void Study_STLApp::mouseDown( MouseEvent event )
{
}

void Study_STLApp::update()
{
  player.update();
  bullet.update();
}

void Study_STLApp::draw()
{
	gl::clear( Color( 0.0f, 0.0f, 0.0f ) ); 

  gl::pushModelView();
  gl::color(Color(1, 1, 1));
  gl::translate(320, 240);

  player.draw();
  bullet.draw();
  gl::popModelView();
}

CINDER_APP_NATIVE( Study_STLApp, RendererGl )

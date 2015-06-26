//
// アプリ雛形
//

#include "common.h"

enum Window 
{
  WIDTH  = 512,
  HEIGHT = 256
};


// 
// メインプログラム
// 
int main() 
{
  AppEnv env(Window::WIDTH, Window::HEIGHT, false, false);

  
  while (env.isOpen()) 
  {
    env.setupDraw();
    
    
    env.update();
  }
}

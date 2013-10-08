#include <window_config.hpp>
#include <menu_config.hpp>
#include <tetrisplosion.hpp>
#include <test_include.hpp>

using tet::WindowConfig;
using tet::WindowWidth;
using tet::WindowHeight;
using tet::WindowTitle;
using tet::MenuConfig;
using tet::Tetrisplosion;

int main(int argc, char *agv[])
{
  WindowWidth const width(800U);
  WindowHeight const height(600U);
  WindowTitle const title("Main Window Title Sir IV");
  WindowConfig const window_config(width, height, title);
  MenuConfig const menu_config;

  Tetrisplosion const tetrisplosion(window_config, menu_config);
  test_fn();
  return 0;
}

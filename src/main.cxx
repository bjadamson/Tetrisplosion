#include <window_config.hpp>
#include <menu_config.hpp>
#include <tetrisplosion.hpp>
#include <test_include.hpp>

using tet::WindowConfig;
using tet::MenuConfig;
using tet::Tetrisplosion;

int main(int argc, char *agv[])
{
  WindowConfig const wc;
  MenuConfig const mc;
  Tetrisplosion const tetrisplosion(wc, mc);
  test_fn();
  return 0;
}

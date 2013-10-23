#include <window_config.hpp>
#include <menu_config.hpp>
#include <tetrisplosion.hpp>
#include <vector>
#include <SFML/Graphics.hpp>

using tet::WindowConfig;
using tet::WindowWidth;
using tet::WindowHeight;
using tet::WindowTitle;
using tet::MenuConfig;
using tet::Tetrisplosion;
using tet::TetrisplosionConfig;
using event::EventFilter;

int main(int argc, char *agv[])
{
  WindowWidth const width(800U);
  WindowHeight const height(600U);
  WindowTitle const title("Main Window Title Sir IV");
  WindowConfig const window_config(width, height, title);
  MenuConfig const menu_config;

  TetrisplosionConfig const tc(window_config, menu_config);

  std::vector<EventFilter> const event_filters;

  // TODO: figure out where this should live..
  sf::RenderWindow rwindow(sf::VideoMode(tc.window_config.width.get(),
      tc.window_config.height.get()), tc.window_config.title.get());

  event::Config const ec(rwindow, event_filters);
  Tetrisplosion tetrisplosion(tc, ec);
  tetrisplosion.run();
  return 0;
}

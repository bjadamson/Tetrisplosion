#include <window_config.hpp>
#include <string>
#include <utility>  // std::move

using std::move;

namespace tet {
WindowWidth::WindowWidth(unsigned int const width_param)
  : width_(width_param)
{
}

unsigned int WindowWidth::get(void) const
{
  return width_;
}

WindowHeight::WindowHeight(unsigned int const height_param)
  : height_(height_param)
{
}

unsigned int WindowHeight::get(void) const
{
  return height_;
}

WindowTitle::WindowTitle(std::string title_param)
  : title_(move(title_param))
{
}

std::string WindowTitle::get(void) const
{
  return title_;
}

WindowConfig::WindowConfig(WindowWidth width_param, WindowHeight height_param,
    WindowTitle title_param) : width(move(width_param)),
  height(move(height_param)), title(move(title_param))
{
}

}  // namespace tet

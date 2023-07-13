#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class LineGraph {
  private:
    const std::string filename_font_arial = "../font/arial.ttf";
    const std::string filename_font_times = "../../font/times.ttf";
    void displayLine(const std::vector<int> &fitnessValues);

  public:
    void run();
};

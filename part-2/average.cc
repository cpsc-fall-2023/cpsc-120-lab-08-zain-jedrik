// Fiona Keaney
// fionakeaney@csu.fullerton.edu
// @fiona-lk
// Partners: @JedrikG , @KhugyaniZain
//

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int size = static_cast<int>(arguments.size());
  if (size < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum = 0.0;
  bool first = true;

  for (std::string const& value : arguments) {
    if (first) {
      first = false;
    } else {
      sum = sum + std::stod(value);
    }
  }

  double average = sum / (size - 1);

  std::cout << "average = " << average;

  return 0;
}

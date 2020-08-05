#include <cstdlib>
#include <string>

std::string uidgen() {
  std::string uid = "1.4.444.90004.223.";
  unsigned int suffix = std::rand() * std::rand();
  return uid + std::to_string(suffix);
}

// std::string uid() {
//   std::string uid = "1.4.444.90004.223.";
//   unsigned int suffix = std::rand() * std::rand();
//   return uid + std::to_string(suffix);
// }

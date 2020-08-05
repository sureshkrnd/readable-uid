#include <cstdlib>
#include <string>

std::string uidgen() {
  std::string uid = "1.4.444.90004.223.";
  unsigned int suffix = std::rand() * std::rand();
  return uid + std::to_string(suffix);
}

std::string uid_split( std::string uid ) {
  static std::vector<std::string> result;
  std::size_t pos_1 = 0;
  std::size_t pos_2 = 0;
  std::string delimiter = ".";
  
  while ((pos_2 = uid.find(delimiter, pos_1)) != std::string::npos)
  {
    result[i] = uid.substr(pos_1, pos_2);
    pos_1 = pos_2 + 1;
    if( result[i].length() > 5 )
      return False;
  } 
    return True; 
}

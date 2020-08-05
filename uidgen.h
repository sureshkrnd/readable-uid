#include <cstdlib>
#include <string>
#include <iostream>

std::string uidgen() {
  std::string uid = "1.4.444.90004.223.";
  unsigned int suffix = std::rand() * std::rand();
  return uid + std::to_string(suffix);
}

bool uid_split( std::string uid ) {
  std::string result[10];
  static std::size_t pos_1 = 0;
  static std::size_t pos_2 = 0;
  std::string delimiter = ".";
  std::uint16_t i = 0;
  std::cout<<uid<<"\n";
  
  while ((pos_2 = uid.find(delimiter, pos_1)) != std::string::npos)
  {
    result[i] = uid.substr(pos_1, (pos_2 - pos_1));
    std::cout<<pos_1<<"\t"<<pos_2<<"\n";
    pos_1 = pos_2 + 1;
    std::cout<<result[i]<<"\n";
    if( result[i].length() > 5 )
      return false;
    i += 1;
  } 
  std::cout<<pos_2<<"\n";
  result[i] = uid.substr(pos_2+1);
  std::cout<<i<<"\n"<<pos_2<<"\n";
  if(result[i].length() > 5)
  {
    return false;
  }
    return true; 
}

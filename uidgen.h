#include <cstdlib>
// #include <string>
#include <bits/stdc++.h> 
#include <boost/algorithm/string.hpp> 

std::string uidgen() {
  std::string uid = "1.4.444.90004.223.";
  unsigned int suffix = std::rand() * std::rand();
  return uid + std::to_string(suffix);
}

std::string uid( std::string uid ) {
  vector<string> result; 
  boost::split(result, uid, boost::is_any_of(".")); 
  
  for (int i = 0; i < result.size(); i++)
  {
    if( result[i].length() > 5 )
      return False;
  } 
    return True; 
}


#include "profile.hpp"
#include <iostream>

std::string Profile::view_profile()
  {
    for(auto a: hobbies)
    {
      std::cout<<a;
    }
  }

void Profile::add_hobby(std::string hobby)
  {
    hobbies.push_back(hobby);
  }
  
// how to declare a constructor 
// member initialize list
/*
Profile::Profile(std::string new_name, int new_age, 
  std::string new_city, std::string new_country, 
  std::string new_pronouns) : 
  {};


  
*/

#include <vector>
#include <string>
#include "profile.hpp"
int main()
{


  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
//undefined reference
//Profile::
//add_hobby(std::__cxx11::basic_string<char
  sam.add_hobby("listening to audiobooks and podcasts");
  sam.add_hobby("playing rec sports like bowling and kickball");
  sam.add_hobby("writing a speculative fiction novel");
  sam.add_hobby("reading advice columns");
  
  sam.view_profile();
  
  
  return false;
}

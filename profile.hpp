#include <vector>

class Profile
{
  private:
  const std::string name;
  const int age;
  const std::string city;
  const std::string country;
  const std::string pronouns;
  const std::vector<std::string> hobbies;
  
// how to declare a constructor 
// member initializer lists
//why app.cpp:(.text+0x1b3):
// undefined reference to 
//`Profile::add_hobbie(std::__cxx11::
//basic_string<char, 
//std::char_traits<char>
//, std::allocator<char> >)'


  public:
//In file included from app.cpp:3:0:
//profile.hpp:26:3: error: extra qualification ‘Profile::’ on member ‘Profile’ [-fpermissive]
  /*Profile::Profile(std::string new_name, int new_age, 
  std::string new_city, std::string new_country, 
  std::string new_pronouns) : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns)
  {};
  */

Profile(std::string new_name, int new_age, 
  std::string new_city, std::string new_country, 
  std::string new_pronouns= "they/them") : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns)
  {};
  void add_hobby(std::string hobby);
  std::string view_profile();
};

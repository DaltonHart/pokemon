#include <string>
#include <iostream>

class Pokemon
{

public:
  std::string name;
  int level;

};

int main()
{
  Pokemon charmander = {"Charmander", 1};

  std::cout << charmander.name << "\n";
  return 0;
}
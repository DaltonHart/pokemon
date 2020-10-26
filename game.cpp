#include <string>
#include <iostream>

class Move
{
public:
  std::string title;
  int pp_total;
  int current_pp;
};

class Pokemon
{

public:
  std::string name;
  int level;

  Move moves[4];
};

int main()
{
  Pokemon charmander = {"Charmander", 1, {{"scratch", 10, 10}}};

  std::cout << charmander.name << "\n";
  return 0;
}
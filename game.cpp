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

  void displayMoves()
  {
    size_t i = 0;
    for (i = 0; i < 4; i++)
    {
      std::cout << "======\n";

      std::cout << moves[i].title << "\n";
    }
  };
};

int main()
{
  Pokemon charmander = {"Charmander", 1, {{"scratch", 10, 10}, {"tail wag", 15, 15}}};

  std::cout << charmander.name << "\n";
  charmander.displayMoves();
  return 0;
}
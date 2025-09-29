#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

void solution()
{
  std::string text;
  std::cin >> text;

  if (islower(text[0]))
  {
    text[0] = toupper(text[0]);
  }

  std::cout << text << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

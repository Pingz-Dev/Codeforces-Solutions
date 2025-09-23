#include <cstdlib>
#include <iostream>

void solution()
{
  size_t line_count = 0;
  std::cin >> line_count;

  std::string word;
  for (size_t line_index = 0; line_index < line_count; ++line_index)
  {
    std::cin >> word;

    if (word.length() <= 10)
    {
      std::cout << word;
    }
    else
    {
      std::cout << *word.begin() << word.length() - 2 << *word.rbegin();
    }

    std::cout << '\n';
  }
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

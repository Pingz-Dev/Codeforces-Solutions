#include <cstdlib>
#include <iostream>

void solution()
{
  size_t statement_count;
  std::cin >> statement_count;

  int result = 0;

  std::string statement;
  for (size_t statement_index = 0; statement_index < statement_count; ++statement_index)
  {
    std::cin >> statement;

    if (statement[0] == '+' || statement[1] == '+' || statement[2] == '+')
    {
      ++result;
    }
    else
    {
      --result;
    }
  }

  std::cout << result << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

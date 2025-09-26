#include <cstdlib>
#include <iostream>

void solution()
{
  size_t case_count;
  std::cin >> case_count;

  size_t result = 0;

  int a, b, c;
  for (size_t case_index = 0; case_index < case_count; ++case_index)
  {
    std::cin >> a >> b >> c;
    if ((a && b) || (a && c) || (b && c))
    {
      ++result;
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

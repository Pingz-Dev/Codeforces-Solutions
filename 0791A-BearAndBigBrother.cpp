#include <cstdlib>
#include <iostream>

void solution()
{
  int a, b;
  std::cin >> a >> b;

  int result = 0;
  while (a <= b)
  {
    ++result;
    a *= 3;
    b *= 2;
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

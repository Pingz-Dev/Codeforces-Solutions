#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solution()
{
  int m, n;
  std::cin >> m >> n;

  int p = m / 2;
  int q = n / 2;
  int s = 2 * p * q;

  if ((m % 2 == 1) && (n % 2 == 1))
  {
    s += p + q;
  }
  else if ((m % 2 == 1) && (n % 2 == 0))
  {
    s += q;
  }
  else if ((m % 2 == 0) && (n % 2 == 1))
  {
    s += p;
  }

  std::cout << s << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

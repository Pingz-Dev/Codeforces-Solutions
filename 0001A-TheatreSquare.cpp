#include <cstdlib>
#include <iostream>
#include <cmath>

void solution()
{
  long double n, m, a;
  std::cin >> n >> m >> a;
  std::cout << static_cast<unsigned long long>(
                   std::ceil(n / a) *
                   std::ceil(m / a))
            << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

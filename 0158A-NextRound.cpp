#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

void solution()
{
  size_t n, k, t;
  std::cin >> n >> k;

  std::vector<size_t> v;
  for (size_t i = 0; i < n; ++i)
  {
    std::cin >> t;
    v.push_back(t);
  }

  nth_element(
      v.begin(),
      v.begin() + k - 1,
      v.end(),
      std::greater<size_t>());
  t = *(v.begin() + k - 1);

  std::cout << std::accumulate(
                   v.begin(),
                   v.end(),
                   0u,
                   [t](size_t s, size_t x)
                   { return s + (x > 0 && x >= t ? 1 : 0); })
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

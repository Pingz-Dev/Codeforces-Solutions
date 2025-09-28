#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

void solution()
{
  std::string text;
  std::cin >> text;

  std::vector<int> num_vector;

  int num = 0;
  for (std::string::iterator p = text.begin(); p != text.end(); ++p)
  {
    if (*p == '+')
    {
      num_vector.push_back(num);
      num = 0;
    }
    else
    {
      num = num * 10 + (*p - '0');
    }
  }

  num_vector.push_back(num);

  std::sort(num_vector.begin(), num_vector.end());

  std::cout << num_vector[0];
  for (std::vector<int>::const_iterator p = num_vector.begin() + 1; p != num_vector.end(); ++p)
  {
    std::cout << '+' << *p;
  }
  std::cout << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

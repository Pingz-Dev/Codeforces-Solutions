#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

void solution()
{
  std::string name;
  std::cin >> name;

  std::sort(name.begin(), name.end());

  int count = 0;
  std::string::iterator p, q;
  for (p = name.begin(); p != name.end(); ++p)
  {
    for (q = p + 1; q != name.end(); ++q)
    {
      if (*p == *q)
      {
        continue;
      }

      break;
    }

    ++count;
    p = --q;
  }

  std::cout << ((count % 2 == 1) ? "IGNORE HIM!" : "CHAT WITH HER!") << '\n';
}

int main()
{
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  solution();

  return EXIT_SUCCESS;
}

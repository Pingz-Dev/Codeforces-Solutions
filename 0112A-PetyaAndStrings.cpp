#include <cstdlib>
#include <iostream>
#include <cmath>

void solution()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    std::string::const_iterator p = s1.begin();
    std::string::const_iterator q = s2.begin();

    int c1, c2, result = 0;
    while (p != s1.end())
    {
        c1 = tolower(*p);
        c2 = tolower(*q);

        if (c1 == c2)
        {
            ++p;
            ++q;
            continue;
        }

        if (c1 < c2)
        {
            result = -1;
            break;
        }

        result = 1;
        break;
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

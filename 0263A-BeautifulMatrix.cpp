#include <cstdlib>
#include <iostream>
#include <cmath>

void solution()
{
    int x, row, column;
    for (int i = 0; i < 25; ++i)
    {
        std::cin >> x;

        if (x == 1)
        {
            row = i / 5;
            column = i % 5;
        }
    }

    std::cout << abs(row - 2) + abs(column - 2) << '\n';
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    solution();

    return EXIT_SUCCESS;
}

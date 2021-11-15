#include <iostream>
using namespace std;
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }

    int prepower = power(n, p - 1);
    return (n * prepower);
}
int main(int argc, char const *argv[])
{
    cout << power(4, 3);

    return 0;
}

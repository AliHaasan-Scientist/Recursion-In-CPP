#include <iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }

    int psum = sum(n - 1);
    return (n + psum);
}
int main(int argc, char const *argv[])
{
    cout << sum(4);

    return 0;
}

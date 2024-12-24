#include <random>
#include <iostream>
#include <chrono>


using namespace std;

int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;
    default_random_engine e(chrono::system_clock::now().time_since_epoch().count());
    uniform_int_distribution<int> gen = uniform_int_distribution<int>(0, m);
    for (size_t i = 0; i < n; i++)
    {
        cout<<gen(e)<<" ";
    }
    cout << endl;

    return 0;
}



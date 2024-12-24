#include <iostream>
#include <algorithm>

using namespace std;
const int MAXN = 1000;
int arr[MAXN];


int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << "\n";
    return 0;
}

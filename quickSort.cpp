#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;
const int MAXN = 1000;
int arr[MAXN];
int Partition(int left, int right){
    int flag = left + rand() % (right - left + 1);
    swap(arr[left], arr[flag]);
    while(left < right){
        while(left < right && arr[left] <= arr[right]){
            right--;
        }
        swap(arr[left], arr[right]);
        while(left < right && arr[left] <= arr[right]){
            left++;
        }
        swap(arr[left], arr[right]);
    }
    return left;
}
void qsort(int left, int right){
    if(left < right){
        int pos = Partition(left, right);
        qsort(left, pos-1);
        qsort(pos+1, right);
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    qsort(0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
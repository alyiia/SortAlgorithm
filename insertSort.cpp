#include <iostream>
using namespace std;
const int MAXN = 1000;
int arr[MAXN];

void insertSort(int n){
	for (int i = 1; i < n; ++i) {
		int tmp = arr[i];
	    for (int j = 0; j <= i; ++j) {
		    if (tmp < arr[j] || j == i) {
		        swap(tmp, arr[j]);
		    }
	    }
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
    insertSort(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
#include <iostream>
using namespace std;
const int MAXN = 1000;
int arr[MAXN];

void selectionSort(int n){
	int max_pos = 0;
	for (int i = n - 1; i > 0; --i) {
		for (int j = 1; j <= i; ++j) {
		    if (arr[j] > arr[max_pos])
		        max_pos = j;
	    }
	    swap(arr[max_pos], arr[i]);
	    max_pos = 0;
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
    selectionSort(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
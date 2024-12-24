#include <iostream>
using namespace std;
const int MAXN = 1000;
int arr[MAXN];
void shellSort(int n){
	for (int gap = n / 2; gap > 0; gap /= 2) {
		for (int i = gap; i < n; ++i) {
			int temp = arr[i];

			int j;
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = temp;
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
    shellSort(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}
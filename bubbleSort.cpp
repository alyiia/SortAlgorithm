#include <iostream>
using namespace std;
const int MAXN = 1000;
int arr[MAXN];

void bubbleSort(int n){
	bool swaped; // for optimized, if no element swaped, meaning it's in ordered,
               // then break
	for (int i = 0; i < n - 1; ++i) {
	    for (int j = 0; j < n - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
		        swap(arr[j], arr[j + 1]);
		        swaped = true;
		    }
	    }
	    if (!swaped)
	      break;
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
    bubbleSort(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}
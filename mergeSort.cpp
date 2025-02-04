#include <iostream>
using namespace std;
const int MAXN = 1000;
int arr[MAXN];
int temp[MAXN];
void combine(int left, int mid, int right){
/*
left            mid         right
 |               |           |
_______________________________
|1 |2 |3 |4 |5 |6 |7 |8 |9 |10|
|_____________________________|
 ||                |            
 ik-->             j-->             
*/
    int i = left;   //左侧数组下标
    int j = mid +1; //右侧数组下标
    int k = left;   //临时数组下标
    while(i<= mid && j<= right){    //当
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(int tmp = left; tmp <= right; ++tmp){
        arr[tmp] = temp[tmp];
    }
}
void mergeSort(int left, int right){
    if(left < right){
        int middle = left + (right - left) /2;  //从中间分开
        mergeSort(left, middle);
        mergeSort(middle+1, right);
        combine(left, middle, right);   //合并
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
    mergeSort(0, n-1);  //是双闭区间
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}
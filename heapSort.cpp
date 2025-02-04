#include <iostream>

using namespace std;

const int MAXN = 1000;
int arr[MAXN];

inline int leftChild(int i){
    return 2*i+1;
}

void shiftDown(int i, int n){
    int child = leftChild(i);
    while(child < n){
        if(child != n-1 && arr[child] < arr[child+1])   //选择子节点中最大的那个
            ++child;
        if(arr[i] < arr[child]){    //如果子节点比父节点大则交换
            swap(arr[i], arr[child]);

            i = child;              //继续向下比较
            child = leftChild(i);
        }
        else
            break;
    }  
}

void heapSort(int n){
    for(int i = n/2 - 1; i>=0; --i)     //建堆
        shiftDown(i,  n);
    for (int i = n-1; i >=1; --i) 
    {
        swap(arr[0], arr[i]);   
        shiftDown(0, i-1);
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
    heapSort(n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}
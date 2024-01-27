#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cin;
using std::cout;

void mergesort(vector<int> &arr, int low, int high)
{
    if(low < high)
    {
        int mid =(low+high)/2;
        mergesort(arr, low, mid);
        mergesort(arr, mid+1, high);
        // linearly, merge to sorted blocks
    }
}

int main(){
    vector<int> a;

    for(int i = 0;i < 5;i++){
        a.push_back(i);
    }
    for(int i = 0;i < 5;i++){
        a.push_back(i);
    }


    return 0;
}
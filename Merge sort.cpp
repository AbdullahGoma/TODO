#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int mergesort(vector<int> &arr,int low,int high){
    int mid = (high + low) / 2;
    mergesort(arr,low,mid); 
    mergesort(arr,mid+1,high);  
}

int main(){
    int x;
    
    cout << "Enter n of array : " << endl;
    cin >> x;

    int a[x];

    for(int i = 0;i < x;i++){
        cout << "Enter " << i << " th number of array : " << endl;
        cin >> a[i];
    }

    mergesort(a,0,x-1);
    for(int j = 0;j < x;j++){
        cout << a[j] << endl;
    }
}
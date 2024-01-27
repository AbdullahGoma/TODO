#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
int partition(int array[], int start, int end) {
  int pivot = array[end];
  int pindex = (start - 1);
  for (int j = start; j < end; j++) {
    if (array[j] <= pivot) {
      pindex++;
      swap(&array[pindex], &array[j]);
    }
  }
  swap(&array[pindex + 1], &array[end]);
  return (pindex + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pivot = partition(array, low, high);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}
int main() {
  int n;
  cout<<"Enter n of Array : "<<endl;
  cin>>n;
  int data[n];
  for(int i;i<n;i++){
    cout<<"Enter The "<<i<<" th element : "<<endl;
    cin>>data[i];
  }
  printArray(data, n);
  quickSort(data, 0, n - 1);
  cout << "Sorted array in ascending order: "<<endl;
  printArray(data, n);
}
#include <iostream>
using namespace std;
#include <limits.h>

//reversign function type 1
void rev1(int arr[], int n) {
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n-i-1]=temp;
  }
}

//reversing function type 2
void rev2(int arr[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int n){
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n = 10;
  int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  rev2(myArr, n);

  cout << "Reversed array: ";
  printArray(myArr, n);

}

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;

  int mang[n];
  cout << "Nhap cac phan tu cua mang: ";
  for (int i = 0; i < n; i++) {
    cin >> mang[i];
  }

  // Sử dụng thuật toán bubble sort để sắp xếp các số chẵn trong mảng
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (mang[j] % 2 == 0 && mang[j + 1] % 2 == 0 && mang[j] > mang[j + 1]) {
        int temp = mang[j];
        mang[j] = mang[j + 1];
        mang[j + 1] = temp;
      }
    }
  }

  cout << "Cac so chan trong mang, sap xep theo thu tu tang dan: ";
  for (int i = 0; i < n; i++) {
    if (mang[i] % 2 == 0) {
      cout << mang[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
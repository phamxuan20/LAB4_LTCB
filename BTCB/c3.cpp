#include <iostream>
using namespace std;

void chenPhanTu(int a[], int& n, int x) {
  int i = n - 1;
  while (i >= 0 && a[i] > x) {
    a[i + 1] = a[i];
    i--;
  }
  a[i + 1] = x;
  n++;
}

void inMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cout << "Nhap so phan tu cua mang: ";
  cin >> n;

  int a[100];
  cout << "Nhap cac phan tu cua mang theo thu tu tang hoac giam dan: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int x;
  cout << "Nhap so nguyen x: ";
  cin >> x;

  cout << "Mang truoc khi chen phan tu x: ";
  inMang(a, n);

  chenPhanTu(a, n, x);

  cout << "Mang sau khi chen phan tu x: ";
  inMang(a, n);

  return 0;
}
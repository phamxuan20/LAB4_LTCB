#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cout << "Nhap so phan tu cua day so: ";
  cin >> n;

  int a[n];
  cout << "Nhap cac phan tu cua day so: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int x;
  cout << "Nhap so nguyen x: ";
  cin >> x;

  // Kiểm tra xem x có tồn tại trong dãy a hay không
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      count++;
    }
  }

  if (count > 0) {
    cout << x << " co trong day so a." << endl;
    cout << "So lan xuat hien cua " << x << " trong day so a la: " << count << endl;

    // Xoá toàn bộ các phần tử x khỏi dãy a
    int newSize = n - count;
    int j = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] != x) {
        a[j] = a[i];
        j++;
      }
    }

    n = newSize;
    cout << "Day so a sau khi xoa cac phan tu " << x << ": ";
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  } else {
    cout << x << " khong co trong day so a." << endl;
  }

  return 0;
}
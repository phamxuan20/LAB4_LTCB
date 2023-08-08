#include <iostream>
using namespace std;
  
 
void nhap(int &n, int a[]){
    for(int i=0;i<n;i++){
        cout<<"a["<<i+1<<"]= ";cin>>a[i];
    }
}
  
 
void xuat(int n, int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }   
}
 int tinhTBCongint (int n, int a[]){
    int sum=0, dem=0; 
    for(int i=0;i<n;i++){
       sum+=a[i]; dem++;  
    }
    return sum/n;
}
 
int tinhTBCongDuong(int n, int a[]){
    int sum=0, dem=0; 
    for(int i=0;i<n;i++){
        if(a[i] > 0) {
            sum+=a[i]; dem++;
        }
    }
    if(dem==0) return 0;
    return sum/dem;
}
 
int tinhTBCongAm(int n, int a[]){
    int sum=0, dem=0; 
    for(int i=0;i<n;i++){
        if(a[i]<0) {
            sum+=a[i]; dem++;
        }
    }
    if(dem==0) return 0;
    return sum/dem;
}
 
 
 
int main(){
    int n;
    int a[100];
    do{
        cout<<"Nhap n: "; cin>>n;
    }while(n <= 0 || n >=100);
    nhap(n,a);
    cout<<"\n--------XUAT MANG----\n";
    xuat(n,a);
      
    cout<<"Trung binh cong: "<<tinhTBCongint(n,a)<<"\n\n";
    cout<<"Trung binh so duong: "<<tinhTBCongDuong(n,a)<<"\n\n";
    cout<<"Trung binh so am: "<<tinhTBCongAm(n,a)<<"\n\n";
}
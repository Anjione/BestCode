#include<iostream>
using namespace std;

int main()
{
    int a[3];
    char b[3];
    cout << "Dia chi 3 phan tu cua a: " << endl;
    for(int i = 0;i < 3; i++ )
    {
        cout << a + i << ' ';
    }
    cout << endl << " Dia chi 3 phan tu cua b: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << (int*)&b[i] << ' ';
    }
    return 0;
}
     /*
        Địa chỉ 3 phần từ liên tiếp của mảng a là dãy 3 giá trị tăng dần cách đều nhau 4 chính là kích thước kiểu int 4 bytes
        Tương tự b với kích thước kiểu char 1 bytes
    */

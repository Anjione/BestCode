#include<iostream>
using namespace std;

int main()
{
    int arr[3];
    for( int i=0; i<3; i++)
    {
        cout << &arr[i] << endl;
    }
    char arr1[3];
    for(int i=0; i<3; i++)
    {
        cout << &arr1[i] << endl;

    }
}

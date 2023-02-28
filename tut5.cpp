// find largest element of a given array  of integers

#include <iostream>
using namespace std;

int main()
{
  int i, n;
  float arr[100];
  cout << "enter total number of elements:" << endl;
  cin >> n;

  for (i = 0; i < n; i++)
  {
    cout << "enter number" << i + 1 << ":";
    cin >> arr[i];
  }
  for (i = 1; i < n; i++)
  {
    if (arr[0] < arr[i])
      arr[0] = arr[i];
  }
  cout << endl
       << "largest element=" << arr[0];
  return 0;
}
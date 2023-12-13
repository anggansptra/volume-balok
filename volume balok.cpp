#include <iostream>

using namespace std;

int main()
{
  cout << "##  Program C++ Volume Balok  ##" << endl;
  cout << "===================================================" << endl;
  cout << endl;

  float panjang, lebar, tinggi, luas_permukaan, volume;

  cout << "Input panjang balok: ";
  cin >> panjang;
  cout << "Input lebar balok: ";
  cin >> lebar;
  cout << "Input tinggi balok: ";
  cin >> tinggi;
  cout << endl;

  volume = panjang * lebar * tinggi;

  cout << "Volume balok = " << volume << endl;

  return 0;
}

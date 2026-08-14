#include <iostream>
using namespace std;
int main() {
  double temperatura, suma = 0;

  for (int dia = 1; dia <= 5; dia++) {
    cout << "Temperatura del dia " << dia << ": ";
    cin >> temperatura;
    suma = suma + temperatura;
  }

  double promedio = suma / 5;
  cout << "Promedio: " << promedio << endl;

  if (promedio > 25) {
    cout << "Clima calido" << endl;
  } else {
    cout << "Clima fresco" << endl;
  }
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int nota;
  int aprobatorias = 0;
  int reprobatorias = 0;

  cout << "Ingrese una calificacion (-1 para terminar): ";
  cin >> nota;

  while (nota != -1) {
    if (nota >= 70) {
      aprobatorias++;
    } else {
      reprobatorias++;
    }
    cout << "Ingrese una calificacion (-1 para terminar): ";
    cin >> nota;
  }

  cout << "Calificaciones aprobatorias: " << aprobatorias << endl;
  cout << "Calificaciones reprobatorias: " << reprobatorias << endl;

  return 0;
}

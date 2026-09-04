#include <iostream>
using namespace std;

int main() {
  double precio;
  double total = 0;
  int cantidad = 0;
  double precioMax = 0;

  cout << "Ingrese el precio del producto (0 o negativo para terminar): ";
  cin >> precio;

  while (precio > 0) {
    total = total + precio;
    cantidad++;
    if (precio > precioMax) {
      precioMax = precio;
    }
    cout << "Ingrese el precio del producto (0 o negativo para terminar): ";
    cin >> precio;
  }

  bool cumpleCantidad = (cantidad >= 5);
  bool cumpleTotal = (total > 10000);
  double descuentoPorcentaje;

  if (cumpleCantidad && cumpleTotal) {
    descuentoPorcentaje = 0.15;
  } else if (cumpleCantidad || cumpleTotal) {
    descuentoPorcentaje = 0.10;
  } else {
    descuentoPorcentaje = 0;
  }

  double montoDescuento = total * descuentoPorcentaje;
  double totalFinal = total - montoDescuento;

  cout << "Cantidad de productos comprados: " << cantidad << endl;
  cout << "Total sin descuento: " << total << endl;
  cout << "Producto mas caro comprado: " << precioMax << endl;
  cout << "Porcentaje de descuento aplicado: " << (descuentoPorcentaje * 100)
       << "%" << endl;
  cout << "Total final a pagar: " << totalFinal << endl;

  return 0;
}

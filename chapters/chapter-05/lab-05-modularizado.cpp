// ============================================================
// lab-05-modularizado.cpp
// Version modularizada de lab-05.cpp.
// Cada funcion tiene una sola responsabilidad: pedir un precio,
// registrar la compra, calcular el descuento o mostrar el resumen.
// ============================================================

#include <iostream>
using namespace std;

double pedirPrecio() {
  double precio;
  cout << "Ingrese el precio del producto (0 o negativo para terminar): ";
  cin >> precio;
  return precio;
}

void registrarCompra(double &total, int &cantidad, double &precioMax) {
  double precio = pedirPrecio();

  while (precio > 0) {
    total = total + precio;
    cantidad++;
    if (precio > precioMax) {
      precioMax = precio;
    }
    precio = pedirPrecio();
  }
}

double calcularDescuentoPorcentaje(int cantidad, double total) {
  bool cumpleCantidad = (cantidad >= 5);
  bool cumpleTotal = (total > 10000);

  if (cumpleCantidad && cumpleTotal) {
    return 0.15;
  } else if (cumpleCantidad || cumpleTotal) {
    return 0.10;
  } else {
    return 0;
  }
}

void mostrarResumen(int cantidad, double total, double precioMax,
                    double descuentoPorcentaje) {
  double montoDescuento = total * descuentoPorcentaje;
  double totalFinal = total - montoDescuento;

  cout << "Cantidad de productos comprados: " << cantidad << endl;
  cout << "Total sin descuento: " << total << endl;
  cout << "Producto mas caro comprado: " << precioMax << endl;
  cout << "Porcentaje de descuento aplicado: " << (descuentoPorcentaje * 100)
       << "%" << endl;
  cout << "Total final a pagar: " << totalFinal << endl;
}

int main() {
  double total = 0;
  int cantidad = 0;
  double precioMax = 0;

  registrarCompra(total, cantidad, precioMax);

  double descuentoPorcentaje = calcularDescuentoPorcentaje(cantidad, total);
  mostrarResumen(cantidad, total, precioMax, descuentoPorcentaje);

  return 0;
}

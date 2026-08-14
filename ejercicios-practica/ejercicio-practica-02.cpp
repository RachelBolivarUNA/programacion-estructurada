#include <iostream>
using namespace std;
int main() {
  string categoria;
  int cantNovela = 0, cantTecnico = 0, cantInfantil = 0;
  double totalNovela = 0, totalTecnico = 0, totalInfantil = 0;
  double totalGeneral = 0;
  double precioMin = -1, precioMax = -1;

  cout << "Categoria (Novela/Tecnico/Infantil) o 'fin': ";
  cin >> categoria;

  while (categoria != "fin") {
    double precio, precioFinal;
    cout << "Precio: ";
    cin >> precio;
    if (categoria == "Novela") {
      if (precio > 10000)
        precioFinal = precio * 0.9;
      else
        precioFinal = precio;
      cantNovela++;
      totalNovela = totalNovela + precioFinal;
    } else if (categoria == "Tecnico") {
      precioFinal = precio;
      cantTecnico++;
      totalTecnico = totalTecnico + precioFinal;
    } else {
      precioFinal = precio * 0.85;
      cantInfantil++;
      totalInfantil = totalInfantil + precioFinal;
    }
  
    totalGeneral = totalGeneral + precioFinal;
  
    if (precioMin == -1 || precioFinal < precioMin)
      precioMin = precioFinal;
    if (precioMax == -1 || precioFinal > precioMax)
      precioMax = precioFinal;
  
    cout << "Categoria (Novela/Tecnico/Infantil) o 'fin': ";
    cin >> categoria;
  }

  cout << "Novela: " << cantNovela << " libros, total: " << totalNovela << endl;
  cout << "Tecnico: " << cantTecnico << " libros, total: " << totalTecnico
       << endl;
  cout << "Infantil: " << cantInfantil << " libros, total: " << totalInfantil
       << endl;
  cout << "Total general: " << totalGeneral << endl;
  cout << "Precio minimo vendido: " << precioMin << endl;
  cout << "Precio maximo vendido: " << precioMax << endl;

  if (totalNovela >= totalTecnico && totalNovela >= totalInfantil) {
    cout << "Categoria con mas ingresos: Novela" << endl;
  } else if (totalTecnico >= totalNovela && totalTecnico >= totalInfantil) {
    cout << "Categoria con mas ingresos: Tecnico" << endl;
  } else {
    cout << "Categoria con mas ingresos: Infantil" << endl;
  }
  return 0;
}
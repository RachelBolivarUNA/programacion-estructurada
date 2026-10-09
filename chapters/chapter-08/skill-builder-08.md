# Skill Builder 08

## File Handling and CSV

> "Programming is a skill. Skills are built through practice."

---

## Objective

En Chapter 08 SoundWave deja de guardar la sesión solo mientras el programa está abierto: escribe un archivo de texto, lo vuelve a leer y guarda la grilla de géneros en un CSV. Esta práctica refuerza el parseo de campos separados por comas con `stringstream`.

Esta práctica **no tiene calificación**.

---

## Nota sobre HackerRank

HackerRank no permite practicar lectura ni escritura de archivos reales. Sus problemas reciben los datos por entrada estándar, no por archivos, así que no hay un ejercicio de HackerRank que practique `ofstream` ni `ifstream` directamente. Esa práctica real ya está en la tarea individual de esta clase: [lab-01-playlist-csv.cpp](lab-01-playlist-csv.cpp).

Lo que sí se puede practicar en HackerRank es la técnica de parseo con `stringstream` que se usa para leer un CSV.

---

## Ejercicio recomendado en HackerRank

Resuélvelo en C++.

1. **[StringStream](https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem)** (C++ > Strings, Easy).  
   Implementar una función que reciba un string de enteros separados por comas y los extraiga usando `stringstream`. Es exactamente la técnica usada en el Demo 4 para parsear cada línea del CSV, aplicada a un caso más simple (solo números, sin escribir ni leer un archivo).

---

## Reto bonus

En el repo, no en HackerRank: conectá archivos y CSV con el proyecto MiniGit. Exportá el historial de commits a un archivo CSV y volvé a cargarlo cuando el programa inicia.

---

## Estimated Time

30–45 minutos.

---

## Self Check

Antes del próximo capítulo pregúntate:

- ¿Puedo abrir un archivo con `ofstream`, escribir líneas con `<<` y cerrarlo con `close()`?
- ¿Entiendo por qué `getline` puede ser la condición de un `while`?
- ¿Sé revisar `is_open()` con un `if` cuando el archivo no existe, sin usar `try`/`catch`?
- ¿Puedo separar los campos de una línea CSV con `stringstream` y `getline(ss, token, ',')`?
- ¿Puedo escribir, leer e imprimir una playlist en funciones separadas?

Si respondiste **sí** a todas, estás listo para continuar.

---

## Coming Next

**Chapter 09** cubre manejo de errores con `try`/`catch`.

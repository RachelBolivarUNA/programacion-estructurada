# Chapter 07

## How Does a Program Organize Data Into a Grid?

En este capítulo seguimos en el Tema III (arreglos) y pasamos de una lista a una tabla. SoundWave guarda reproducciones por día de la semana y por género (Pop, Rock, Jazz, Electronic): declaración e inicialización de una matriz, recorrido con ciclos anidados, operaciones básicas y el paso de la matriz como parámetro de una función.

Este capítulo **no tiene challenge**. En clase el instructor guía los demos y el cierre es un único lab grupal.

---

## Topics covered

- Matrix declaration and initialization
- Double-index access (row, column), starting at 0
- Traversal with nested `for` loops
- Basic operations: total, row sum, column sum, max with position, search
- Matrix as a function parameter (column count fixed in the signature)

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-matrix-declaration.cpp](demo-01-matrix-declaration.cpp) | Cómo declarar `int genrePlays[7][4]`, inicializar con listas anidadas y leer una celda con dos índices (día y género). El acceso fuera de rango queda comentado. |
| [demo-02-matrix-traversal.cpp](demo-02-matrix-traversal.cpp) | Cómo recorrer la grilla con dos ciclos `for` y constantes `ROWS` y `COLS`, imprimiendo cada día en una línea. |
| [demo-03-matrix-operations.cpp](demo-03-matrix-operations.cpp) | Total de la matriz, suma de un día, suma de un género, máximo con su fila y columna, y búsqueda de una cantidad de reproducciones. |
| [demo-04-matrix-as-parameter.cpp](demo-04-matrix-as-parameter.cpp) | Cómo pasar la matriz a una función: las columnas quedan fijas en la firma (`[][4]`) y las filas viajan como parámetro aparte. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-genre-grid-stats.cpp](lab-01-genre-grid-stats.cpp) | Lab grupal (3-4 estudiantes): total semanal, reproducciones por día, por género, la celda más alta y una búsqueda, con una función por operación. Es la solución de referencia. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-07.md](skill-builder-07.md) | Ejercicios prácticos de matrices (sin calificación). |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -std=c++17 -o demo-01 demo-01-matrix-declaration.cpp
./demo-01
```

```bash
g++ -std=c++17 -o lab-01 lab-01-genre-grid-stats.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿El primer índice es la fila (día) y el segundo la columna (género)?
2. ¿El salto de línea quedó fuera del ciclo interno, al final de cada fila?
3. ¿La función fija el número de columnas en el parámetro y recibe las filas aparte?

---

## Coming Next

**Chapter 08** cubre manejo de archivos (Tema IV).

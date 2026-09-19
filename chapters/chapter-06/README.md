# Chapter 06

## How Does a Program Remember Many Things at Once?

En este capítulo abrimos el Tema III (arreglos) aprendiendo a guardar muchos valores del mismo tipo en una sola estructura: declaración e inicialización, recorrido con `for`, operaciones básicas sobre playlists de SoundWave, y el paso de arreglos como parámetros de función.

---

## Topics covered

- Array declaration and initialization
- Index access (starting at 0)
- Array traversal with `for`
- Basic operations: sum, average, max, min, linear search, update
- Arrays as function parameters

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-array-declaration.cpp](demo-01-array-declaration.cpp) | Cómo declarar, inicializar y acceder a un arreglo de duraciones de canciones (índice 0), y por qué el acceso fuera de rango no se ejecuta en el demo. |
| [demo-02-array-traversal.cpp](demo-02-array-traversal.cpp) | Cómo recorrer un arreglo con `for` usando una constante `SIZE`, y por qué `i <= SIZE` se pasa del límite. |
| [demo-03-array-operations.cpp](demo-03-array-operations.cpp) | Suma, promedio, máximo, mínimo, búsqueda lineal y actualización sobre el mismo arreglo de duraciones. |
| [demo-04-array-as-parameter.cpp](demo-04-array-as-parameter.cpp) | Cómo refactorizar esas operaciones en funciones que reciben el arreglo y su tamaño (el arreglo se puede modificar sin usar `&`). |

---

## Mini Challenges

| File | What you will practice |
|------|------------------------|
| [challenge-01-linear-search.cpp](challenge-01-linear-search.cpp) | Implementar búsqueda lineal sobre duraciones de canciones y probar un caso donde el valor existe y otro donde no. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-playlist-stats.cpp](lab-01-playlist-stats.cpp) | Estadísticas de una playlist de SoundWave (total, promedio, más larga, más corta y búsqueda) con una función por operación. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-06.md](skill-builder-06.md) | Ejercicios prácticos de arreglos de una dimensión (sin calificación). |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -std=c++17 -o demo-01 demo-01-array-declaration.cpp
./demo-01
```

```bash
g++ -std=c++17 -o lab-01 lab-01-playlist-stats.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Cuáles son los índices válidos de este arreglo?
2. ¿Estoy usando `i < SIZE` o me arriesgo a salirme del límite?
3. ¿Esta operación debería vivir en su propia función?

---

## Coming Next

**Chapter 07** cubre arreglos multidimensionales.

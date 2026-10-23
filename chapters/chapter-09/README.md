# Chapter 09

## ¿Cómo maneja un programa lo que sale mal?

En este capítulo entramos al manejo de errores con excepciones. SoundWave no puede “caerse” entero cuando un promedio no se puede calcular, cuando el usuario escribe texto en lugar de un número, o cuando una línea del CSV de reproducciones viene corrupta. Usamos `throw`, `try` y `catch` para reportar el problema y seguir con el resto del programa.

Este capítulo **no tiene lab individual ni challenges**. El laboratorio de cierre se resuelve en clase en pizarra (ejercicio aparte, no incluido en este repositorio).

---

## Topics covered

- `throw`, `try` y `catch`
- `std::runtime_error` y `error.what()`
- Excepciones estándar: `std::invalid_argument` y `std::out_of_range` (con `stoi`)
- Orden de los `catch` (de más específico a más genérico)
- `try` / `catch` al leer un archivo CSV línea por línea

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-try-catch-basics.cpp](demo-01-try-catch-basics.cpp) | Una función `divide` que lanza `runtime_error` si el divisor es 0; el `main` captura el error, imprime el mensaje y demuestra que el programa continúa. |
| [demo-02-standard-exceptions.cpp](demo-02-standard-exceptions.cpp) | Varias conversiones con `stoi`: `invalid_argument` vs `out_of_range`, cada una en su propio `catch`, y por qué el orden importa. |
| [demo-03-file-error-handling.cpp](demo-03-file-error-handling.cpp) | Lectura de [song_plays.csv](song_plays.csv): una línea con dato corrupto se reporta y el resto del archivo se procesa igual. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-09.md](skill-builder-09.md) | Ejercicio de HackerRank sobre el patrón básico de excepciones, más un bonus opcional sobre el repo (sin calificación). |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejecutá los demos desde esta carpeta (`chapters/chapter-09/`), en especial el Demo 03, que lee `song_plays.csv`.

```bash
g++ -std=c++17 -o demo-01 demo-01-try-catch-basics.cpp && ./demo-01
```

```bash
g++ -std=c++17 -o demo-02 demo-02-standard-exceptions.cpp && ./demo-02
```

```bash
g++ -std=c++17 -o demo-03 demo-03-file-error-handling.cpp && ./demo-03
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Qué pasa si no hay un `catch` que coincida con el tipo lanzado?
2. ¿Por qué conviene capturar `invalid_argument` y `out_of_range` por separado, y en ese orden (específico → genérico)?
3. ¿En el Demo 03, el programa se detiene en la línea corrupta o sigue con las siguientes?

---

## Coming Next

El cierre de este tema es el laboratorio de pizarra en clase. El siguiente capítulo del repositorio se publicará según el calendario del curso.

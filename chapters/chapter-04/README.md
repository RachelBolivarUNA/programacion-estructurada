# Chapter 04

## How Does a Program Organize Its Work?

En este capítulo aprendemos a organizar el código en funciones reutilizables, a pasarles información por valor y por referencia, a hacer que devuelvan un resultado, y a usar `switch` para organizar decisiones de menú — la primera vez que SoundWave deja de vivir entero dentro de `main()`.

---

## Topics covered

- Function declaration and definition
- Parameters by value
- Parameters by reference (`&`)
- Return values (`return`)
- `switch` / `case` / `break` / `default`

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-functions-basics.cpp](demo-01-functions-basics.cpp) | Cómo declarar, definir y llamar una función. |
| [demo-02-parameters.cpp](demo-02-parameters.cpp) | La diferencia entre pasar un parámetro por valor (una copia) y por referencia (la variable original). |
| [demo-03-return-values.cpp](demo-03-return-values.cpp) | Cómo una función puede devolver un valor en lugar de solo realizar una acción. |
| [demo-04-switch-menu.cpp](demo-04-switch-menu.cpp) | Cómo `switch` organiza un menú como alternativa más limpia a una cadena de `if`/`else`. |

---

## Mini Challenges

| File | What you will practice |
|------|------------------------|
| [challenge-01-view-playlist-function.cpp](challenge-01-view-playlist-function.cpp) | Escribir una función `viewPlaylist()` que imprime 3 canciones de ejemplo y llamarla desde `main()`. |
| [challenge-02-play-count-by-reference.cpp](challenge-02-play-count-by-reference.cpp) | Recibir un username por valor y un contador de reproducciones por referencia, e incrementarlo en cada llamada. |
| [challenge-03-average-function.cpp](challenge-03-average-function.cpp) | Escribir una función `double average(double total, int count)` que retorna el promedio. |
| [challenge-04-switch-rate-song.cpp](challenge-04-switch-rate-song.cpp) | Agregar un `case 5` ("Rate this song") al menú `switch` que llama a `isValidRating`. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-soundwave-menu-refactor.cpp](lab-01-soundwave-menu-refactor.cpp) | Un laboratorio final integrador que refactoriza el menú de SoundWave usando funciones, `switch`, un parámetro por referencia y una función que retorna un valor. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-04.md](skill-builder-04.md) | Ejercicios prácticos de funciones, parámetros y `switch` (sin calificación). |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -o demo-01 demo-01-functions-basics.cpp
./demo-01
```

```bash
g++ -o lab-01 lab-01-soundwave-menu-refactor.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Qué pieza de lógica merece tener su propio nombre?
2. ¿Esta función necesita solo leer un dato, o también modificarlo?
3. ¿Esta función hace algo, o también necesita devolver un resultado?

---

## Coming Next

**Chapter 05 — How Does a Program Stay Organized as It Grows?**

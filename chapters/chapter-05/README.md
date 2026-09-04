# Chapter 05

## How Does a Program Stay Organized as It Grows?

En este capítulo cerramos el Tema II (Modularidad) aprendiendo alcance de variables (local y global) y cómo mantener el código organizado sin duplicación a medida que el programa crece.

---

## Topics covered

- Local scope
- Global scope (and why to use it sparingly)
- Modularity (one function, one responsibility)
- Code reuse

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-local-scope.cpp](demo-01-local-scope.cpp) | Cómo una variable local solo existe dentro de la función donde se declara, aunque otra función use el mismo nombre. |
| [demo-02-global-scope.cpp](demo-02-global-scope.cpp) | Cómo una variable global se comparte entre todas las funciones del archivo, y por qué usarla con moderación. |
| [demo-03-modularity-reuse.cpp](demo-03-modularity-reuse.cpp) | Cómo extraer un bloque repetido a una función elimina la duplicación y deja una sola fuente de verdad. |

---

## Mini Challenges

| File | What you will practice |
|------|------------------------|
| [challenge-01-predict-local-scope.cpp](challenge-01-predict-local-scope.cpp) | Predecir qué imprime el programa antes de ejecutarlo, y luego correrlo para comprobar. |
| [challenge-02-shared-global-counter.cpp](challenge-02-shared-global-counter.cpp) | Agregar una segunda función que también use el contador global `totalPlaysToday` y confirmar que ambas comparten el mismo valor. |
| [challenge-03-split-login-function.cpp](challenge-03-split-login-function.cpp) | Dividir `loginUser()` en tres funciones, cada una con una sola responsabilidad. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-soundwave-codebase-messy.cpp](lab-01-soundwave-codebase-messy.cpp) | La versión de partida: el menú de SoundWave funciona, pero imprime la playlist dos veces y usa un contador global innecesario. |
| [lab-01-soundwave-codebase-cleanup.cpp](lab-01-soundwave-codebase-cleanup.cpp) | Un laboratorio final integrador (el más largo hasta ahora) que limpia esa versión "sucia", eliminando duplicación y revisando el uso de una variable global. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-05.md](skill-builder-05.md) | Ejercicios prácticos de alcance de variables y modularidad (sin calificación). |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -o demo-01 demo-01-local-scope.cpp
./demo-01
```

```bash
g++ -o lab-01 lab-01-soundwave-codebase-cleanup.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Esta variable necesita vivir dentro de una sola función, o de verdad la necesita todo el programa?
2. ¿Esta función podría resumirse en una sola frase, o está haciendo demasiado?
3. ¿Este bloque de código aparece en más de un lugar? ¿Debería ser una función?

---

## Coming Next

**Chapter 06 — How Does a Program Remember Many Things at Once?**

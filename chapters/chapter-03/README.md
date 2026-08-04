# Chapter 03

## How Does a Program Transform, Decide, and Repeat Information?

En este capítulo aprendemos cómo un programa transforma información con operadores, toma decisiones con condicionales y repite acciones con ciclos — las tres piezas que le faltaban a SoundWave para dejar de ser solo un programa que "recuerda" y empezar a comportarse de forma inteligente.

---

## Topics covered

- Arithmetic operators (`+ - * / %`)
- Compound assignment and increment (`+=`, `++`)
- Conditionals (`if`/`else`, `else if`)
- Relational operators (`== != < > <= >=`) and logical operators (`&& || !`)
- Loops (`while`, `do-while`, `for`)
- Infinite loops and how to avoid them

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-arithmetic-operators.cpp](demo-01-arithmetic-operators.cpp) | Contador de reproducciones y minutos escuchados con operadores aritméticos y asignación compuesta. |
| [demo-02-conditionals.cpp](demo-02-conditionals.cpp) | Validar una calificación de canción entre 1 y 5 con `if`/`else`. |
| [demo-03-loops-menu.cpp](demo-03-loops-menu.cpp) | Menú principal de SoundWave que se repite con `do-while` hasta que el usuario elige salir. |
| [demo-04-for-loop.cpp](demo-04-for-loop.cpp) | Ejemplo adicional de `for` (no se alcanzó a cubrir en vivo en la presentación; disponible para repasar). |

---

## Mini Challenges

| File | What you will practice |
|------|------------------------|
| [challenge-01-average-listening-time.cpp](challenge-01-average-listening-time.cpp) | Calcular el promedio de minutos escuchados por día usando solo operadores aritméticos. |
| [challenge-02-premium-playback.cpp](challenge-02-premium-playback.cpp) | Decidir si un usuario puede reproducir una canción según Premium o el límite diario. |
| [challenge-03-valid-rating-loop.cpp](challenge-03-valid-rating-loop.cpp) | Pedir una calificación válida entre 1 y 5 combinando un ciclo con una condicional. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-soundwave-login.cpp](lab-01-soundwave-login.cpp) | Un login de SoundWave: pide credenciales, reintenta hasta 3 intentos y muestra éxito o cuenta bloqueada. |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -o demo-01 demo-01-arithmetic-operators.cpp
./demo-01
```

```bash
g++ -o lab-01 lab-01-soundwave-login.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Qué información necesita transformar el programa, y con qué operador?
2. ¿Qué decisión debe tomar el programa, y qué condición la determina?
3. ¿Qué acción se repite, y cuándo debe detenerse el ciclo?

---

## Coming Next

**Chapter 04 — How Does a Program Organize Its Work?**

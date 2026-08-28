# Skill Builder 04

## Functions, Parameters & Switch

> "Programming is a skill. Skills are built through practice."

---

## Objective

Reforzar los conceptos aprendidos en el Chapter 04 mediante ejercicios prácticos.

Esta práctica **no tiene calificación**.

Su propósito es ayudarte a ganar fluidez programando y prepararte para el siguiente capítulo.

---

## Concepts Covered

Al finalizar este Skill Builder deberías sentirte cómodo con:

- Declaración y definición de funciones
- Parámetros por valor
- Parámetros por referencia (`&`)
- Retorno de valores (`return`)
- `switch` / `case` / `break` / `default`

---

## Practice Exercises

### Exercise 01 — Functions

**Objetivo:** Practicar la declaración de una función con varios parámetros y un valor de retorno.

**Plataforma:** HackerRank

**Link:** https://www.hackerrank.com/challenges/c-tutorial-functions/problem

---

## Important

Este track de HackerRank no tiene ejercicios dedicados a paso por referencia ni a `switch` — por eso el Bonus Challenge de abajo cubre esos dos temas directamente sobre el laboratorio del capítulo.

En los ejercicios de HackerRank, resuélvelos utilizando únicamente:

- `cin`
- `cout`

Tampoco utilices todavía arreglos — mismas restricciones vistas en clase.

---

## Bonus Challenge

Retoma `lab-01-soundwave-menu-refactor.cpp` (el laboratorio que hicimos en clase) y agrégale:

- Una nueva función `void addToQueue(string songName, int &queueSize)` que reciba el nombre de una canción y aumente por referencia un contador `queueSize`.
- Un nuevo `case` en el `switch` del menú (por ejemplo, "5. Add to queue") que llame a esa función.

No utilices todavía:

- arreglos
- punteros

---

## Recommended Resource

Si deseas reforzar el tema antes del próximo capítulo, puedes revisar:

[LearnCpp](https://www.learncpp.com/) — Funciones, parámetros y `switch`.

---

## Estimated Time

45–60 minutos.

---

## Self Check

Antes del próximo capítulo pregúntate:

- ¿Puedo declarar y llamar una función sin buscar en Google?
- ¿Sé cuándo pasar un parámetro por valor y cuándo por referencia?
- ¿Entiendo la diferencia entre una función `void` y una que retorna un valor?
- ¿Puedo escribir un `switch` con `break` en cada `case` sin que se me olvide?
- ¿Podría volver a escribir el laboratorio de refactorización sin copiar el código?

Si respondiste **sí** a todas, estás listo para continuar.

---

## Coming Next

**Chapter 05 — How Does a Program Stay Organized as It Grows?**

En el próximo capítulo descubriremos hasta dónde puede "ver" una variable dentro de un programa, y cómo dividirlo en partes cada vez más independientes.

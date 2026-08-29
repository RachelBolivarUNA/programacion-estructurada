# Skill Builder 05

## Scope & Modularity

> "Programming is a skill. Skills are built through practice."

---

## Objective

Reforzar los conceptos aprendidos en el Chapter 05 mediante ejercicios prácticos.

Esta práctica **no tiene calificación**.

Su propósito es ayudarte a ganar fluidez programando y prepararte para el siguiente capítulo — el último antes de la entrega y defensa de la Etapa 1 del proyecto.

---

## Concepts Covered

Al finalizar este Skill Builder deberías sentirte cómodo con:

- Alcance local
- Alcance global
- Modularidad (una función, una responsabilidad)
- Reutilización de código

---

## Important

No encontré un ejercicio de HackerRank sobre alcance de variables que se pueda resolver solo con lo visto en el curso hasta ahora — el único disponible en ese tema requiere arreglos y clases, que todavía no hemos cubierto. Por eso esta vez la práctica se apoya en los dos Bonus Challenges de abajo, directamente sobre el código del curso.

---

## Bonus Challenge 1 — Encuentra la variable global innecesaria

Retoma `lab-01-soundwave-menu-refactor.cpp` (Chapter 04) o tu propio código de MiniGit. Buscá si hay alguna variable que podría ser local o un parámetro, pero está declarada como global "por comodidad". Convertila en parámetro (por valor o por referencia, según corresponda) y confirmá que el programa se sigue comportando igual.

## Bonus Challenge 2 — Elimina una duplicación

Retoma `lab-01-soundwave-codebase-cleanup.cpp` (Chapter 05) y agregale una tercera función que necesite mostrar la playlist (por ejemplo, una opción "Shuffle playlist"). En vez de escribir el bloque de `cout` de nuevo, reutilizá `printPlaylist()`.

No utilices todavía:

- arreglos
- punteros

---

## Recommended Resource

Si deseas reforzar el tema antes del próximo capítulo, puedes revisar:

[LearnCpp](https://www.learncpp.com/) — Alcance de variables y organización del código.

---

## Estimated Time

30–45 minutos.

---

## Self Check

Antes del próximo capítulo pregúntate:

- ¿Puedo explicar la diferencia entre una variable local y una global sin buscar en Google?
- ¿Sé identificar cuándo una variable global es realmente necesaria, y cuándo no?
- ¿Puedo mirar una función larga y decidir si debería dividirse?
- ¿Sé reconocer código duplicado y convertirlo en una función reutilizable?
- ¿Podría volver a escribir el laboratorio de limpieza sin copiar el código?

Si respondiste **sí** a todas, estás listo para la entrega y defensa de la Etapa 1 del proyecto.

---

## Coming Next

**Chapter 06 — How Does a Program Remember Many Things at Once?**

En el próximo capítulo descubriremos cómo un programa guarda muchos elementos del mismo tipo — el inicio de Tema III (arreglos).

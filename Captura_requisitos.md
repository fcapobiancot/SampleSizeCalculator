# Captura de requisitos
La captura de requisitos es vital en el desarrollo de software para identificar funcionalidades, limitaciones y requisitos necesarios para cumplir expectativas y necesidades de los usuarios.

## Historia de usuario
Como usuario, quiero poder introducir los datos necesarios para calcular el tamaño de la muestra finita en un programa de C ++ para obtener el resultado y tener la opción de realizar otro cálculo si lo deseo.

## Requisitos funcionales
El programa debe permitir al usuario ingresar los siguientes datos:
* población (N)
* nivel de confianza (z)
* probabilidad de éxito (p)
* probabilidad de fracaso (q)
* nivel de error (e)
* El programa debe calcular el tamaño de la muestra finita utilizando la fórmula
n = N * p * q * [(z / 100 * 0.5) / e] ^ 2 / [(N - 1) * p * q * (z / 100 * 0.5) / e ^ 2 + (p * q)]
* El programa debe mostrar el resultado del tamaño de la muestra finita calculado.
* El programa debe preguntar al usuario si desea realizar otro cálculo. Si la respuesta es afirmativa, el programa debe volver a pedir los datos de entrada. De lo contrario, el programa debe finalizar.

## Requisitos no funcionales
* El programa debe ser implementado en C ++.
* El programa debe mostrar mensajes de error y advertencia si se ingresan datos inválidos o si ocurre algún error en el cálculo.
* El programa debe ser fácil de usar y comprender para los usuarios, con mensajes claros y concisos.
## Supuestos
* Se supone que los datos de entrada proporcionados por el usuario son válidos y coherentes.
* Se supone que el usuario tiene conocimientos básicos de estadística y los términos utilizados en el programa.
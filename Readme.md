# Pruebas de librerías embebidas de ML

 *  `TinyML/MLHeaderGenerator.py` Genera los archivos .c en /output
 *  `make mlkernels2` o `make` genera los binarios `/Build/*-2val-test` para las pruebas con vectores de tamaño 2
 *  `make mlkernels6` genera los binarios `/Build/*-6val-test` para las pruebas con vectores de tamaño 6
 *  `make mlkernels8` genera los binarios `/Build/*-8val-test` para las pruebas con vectores de tamaño 8
 *  `make run-tests` ejecuta todos los binarios `/Build/*-test`
 *  `make strip` limpia los símbolos de debug de todos los binarios
 *  `make profile-tests` ejecuta `tstime` contra todos los tests para sacar estadísticas de consumo de RAM (haz `make` en `tstime/` primero; Necesita root para funcionar) 

## Requiere:
 * Numpy
 * Pandas
 * sklearn (scikit-learn)
 * emlearn
 * micromlgen

En Debian: ` apt install sudo python3-numpy python3-pandas python3-sklearn  python3-pip git git-lfs cmake build-essential && pip3 install emlearn micromlgen`

¡OJO! El repositorio está configurado con `git-lfs`, necesitas `git-lfs` y ejecutar `git-lfs fetch` para obtener los archivos de training.

Snip: `make profile-tests 2>&1 | grep 'Algorithm\|rss' | sed "s/- WITH.*//g"`

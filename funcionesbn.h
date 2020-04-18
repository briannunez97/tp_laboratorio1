#ifndef FUNCIONESBN_H_INCLUDED
#define FUNCIONESBN_H_INCLUDED


#endif // FUNCIONESBN_H_INCLUDED
/** \brief muestra al usuario el menu
 *
 * \param flag para saber si el usuario ingreso el operador A
 * \param flag para saber si el usuario ingreso el operador B
 * \param operador A para mostrar en pantalla
 * \param operador B para mostrar en pantalla
 * \return nada
 *
 */
void menu(int fn1,int fn2,float n1,float n2);

/** \brief suma dos numeros float
 *
 * \param operador A
 * \param operador B
 * \return la suma de ambos operadores
 *
 */
float sumar(float n1,float n2);

/** \brief resta dos numeros float
 *
 * \param operador A
 * \param operador B
 * \return la resta de ambos operadores
 *
 */
float restar(float n1,float n2);

/** \brief divide dos numeros float
 *
 * \param operador A
 * \param operador B
 * \return la division de A / B
 *
 */
float dividir(float n1,float n2);

/** \brief multiplica dos numeros float
 *
 * \param operador A
 * \param operador B
 * \return la multriplicacion de A*B
 *
 */
float multiplicar(float n1,float n2);

/** \brief factorea un numero float
 *
 * \param numero float
 * \return numero factoreado
 *
 */
float factorear(float dato);

/** \brief informa al usuario los resultados
 *
 * \param operador A
 * \param operador B
 * \param int para verificar si es posible o no la division, y en base a ello mostrarle uno u otro mensaje.
 * \param resultado de la suma
 * \param resultado de la resta
 * \param resultado de la division
 * \param resultado de la multiplicacion
 * \param resultado del factorial de A
 * \param resultado del factorial de B
 * \return
 *
 */
void informar(float a,float b,int cero,float ds,float dr,float dd,float dm,float df1,float df2);




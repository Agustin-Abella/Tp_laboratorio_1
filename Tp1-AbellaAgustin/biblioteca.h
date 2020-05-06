#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED


/** \brief toma numeros enteros para opcion y  los valores A y B
 *
 * \param recibe como parametro los mensajes y si tiene que validar o no
 * \return int devuelve el numero ingresado por el usuario
 *
 */
int  tomarInt(char [],char [],int ,int ,int );

/** \brief suma el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna el resultado de la suma
 *
 */
double sumaa(double , double );

/** \brief resta el valor de A y B
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna el resultado de la resta
 *
 */
double restaa(double ,double );

/** \brief multiplica el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna el resultado de la multiplicacion
 *
 */
double multiplicacion(double,double);

/** \brief divide el valor de A y B
 *
 * \param numeroUno double recibe el Balor A
 * \param numeroDos double recibe el balor B
 * \return double retorna la divicion
 *
 */
double divicion(double,double);

/** \brief factoriza el valor de A y B
 *
 * \param recibe un numero ingresado por el usuario
 * \return double retorna el resultado del factorial
 *
 */
double factorial(double);

/** \brief contiene todo el menu, variables y llamadas a funcion
 *
 * \param void
 * \return void
 *
 */
void mostrarMenu(void);
#endif // BIBLIOTECA_H_INCLUDED

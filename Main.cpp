/*
 * =====================================================================================
 *
 *       Filename:  Main.cpp
 *
 *    Description: main() 
 *
 *        Version:  1.0
 *        Created:  03/25/2021 14:17:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Cliente.hpp"
#include "Tarjeta.hpp"
#include "TCredito.hpp"
#include "Vigencia.hpp"

#include <stdlib.h>
#include <iostream>


int main(void)
{
	// Creating a client object with the Empty constructor
	Cliente cliente1;
	Tarjeta tarjeta1;
	Vigencia vigencia1("12","24");

	TCredito tc1(1050.75, "1111222233334444", "543", "55986436", vigencia1);

	cout << "Balance de tc1:: " << tc1.getBalanceAlCorte() << endl;
	cout << "tc1, num en plastico:: " << tc1.getNumDePlastico() << endl;  
	cout << "tc1, num de seg:: " << tc1.getNumDeSeguridad() << endl;  
	cout << "tc1, num de cta:: " << tc1.getNumDeCuenta() << endl;  

        // Creating an client object with the non-empty constructor
	Cliente cliente2("Joe", "AIMA234343MKA", "Bla bla bla...");

	cout << "Nombre: " << cliente2.getNombre() << endl;
	cout << "RFC: " << cliente2.getRFC() << endl;
	cout << "Nombre: " << cliente2.getDomicilio() << endl;

	cout << "Nombre (cliente1): " << cliente1.getNombre() << endl;

	Tarjeta tarjeta2("12334", "345", "453678", vigencia1);

	cout << "Numero de plastico (1): " << tarjeta1.getNumDePlastico() << endl;
	cout << "Numero de plastico (2): " << tarjeta2.getNumDePlastico() << endl;


	return EXIT_SUCCESS;
}



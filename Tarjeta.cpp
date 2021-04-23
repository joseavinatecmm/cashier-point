/*
 * =====================================================================================
 *
 *       Filename:  Tarjeta.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  03/26/2021 14:21:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Tarjeta.hpp"

Tarjeta::Tarjeta() {}

Tarjeta::Tarjeta(string elNumeroDePlastico,  string elNumeroDeSeguridad, string elNumeroDeCuenta, Vigencia laVigencia)
{
	numeroDePlastico = elNumeroDePlastico;
	numeroDeSeguridad = elNumeroDeSeguridad;
	numeroDeCuenta = elNumeroDeCuenta;
	vigencia = laVigencia;
}


string Tarjeta::getNumDePlastico()
{
	return numeroDePlastico;
}


string Tarjeta::getNumDeSeguridad()
{
	return numeroDeSeguridad;
}	


string Tarjeta::getNumDeCuenta()
{
	return numeroDeCuenta;
}

Vigencia Tarjeta::getVigencia()
{
	return vigencia;
}



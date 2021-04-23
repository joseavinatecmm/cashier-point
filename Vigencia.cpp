/*
 * =====================================================================================
 *
 *       Filename:  Vigencia.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/2021 14:40:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Vigencia.hpp"

Vigencia::Vigencia(){}

Vigencia::Vigencia(string elMes, string elAnio)
{
	mes = elMes;
	anio = elAnio;
}

string Vigencia::getMes()
{
	return mes;
}

string Vigencia::getAnio()
{
	return anio;
}



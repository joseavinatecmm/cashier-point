/*
 * =====================================================================================
 *
 *       Filename:  Cliente.cpp
 *
 *    Description: Implementation 
 *
 *        Version:  1.0
 *        Created:  03/19/2021 14:29:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "Cliente.hpp"

Cliente::Cliente() {}

Cliente::Cliente(string elNombre, string elRFC, string elDomicilio)
{
	nombre = elNombre;
	RFC = elRFC;
	domicilio = elDomicilio;
}

string Cliente::getNombre()
{
	return nombre; 
}

string Cliente::getRFC()
{
	return RFC;
}

string Cliente::getDomicilio()
{
	return domicilio;

}

void Cliente::setDomicilio(string elDomicilio)
{
	domicilio = elDomicilio;

}





/*
 * =====================================================================================
 *
 *       Filename:  Tarjeta.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  03/26/2021 14:00:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef TARJETA_HPP
#define TARJETA_HPP
#include <string>
#include "Vigencia.hpp"

using namespace std;
class Tarjeta 
{
	private:
		string numeroDePlastico;
		string numeroDeSeguridad;
		string numeroDeCuenta;
		Vigencia vigencia;
	public:

	       Tarjeta();
               Tarjeta(string numeroDePlastico, string numeroDeSeguridad,
		        string numeroDeCuenta, Vigencia laVigencia);
		string getNumDePlastico();
		string getNumDeSeguridad();
		string getNumDeCuenta();
		Vigencia getVigencia();
};





#endif

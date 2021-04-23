/*
 * =====================================================================================
 *
 *       Filename:  TCredito.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  04/21/2021 14:37:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef TCREDITO_HPP
#define TCREDITO_HPP

#include "Vigencia.hpp"
#include "Tarjeta.hpp"

class TCredito : public Tarjeta 
{
	private:
		float balanceAlCorte;

	public:
		TCredito(float elBalanceAlCorte, string elNumEnPlastico, 
		         string elNumeroDeSeguridad,string elNumeroDeCuenta, 
			 Vigencia laVigencia);

		float getBalanceAlCorte();
}; 
#endif
















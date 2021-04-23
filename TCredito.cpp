/*
 * =====================================================================================
 *
 *       Filename:  TCredito.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/21/2021 14:52:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "TCredito.hpp"

TCredito::TCredito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
		   string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
			   						  elNumeroDeSeguridad,
									  elNumeroDeCuenta,
									  laVigencia)
{
	balanceAlCorte = elBalanceAlCorte;
}


float TCredito::getBalanceAlCorte()
{
	return balanceAlCorte;
}



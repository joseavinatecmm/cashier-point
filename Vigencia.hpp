/*
 * =====================================================================================
 *
 *       Filename:  Vigencia.hpp
 *
 *    Description: Interface 
 *
 *        Version:  1.0
 *        Created:  03/26/2021 14:40:47
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Pepetron, 
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef VIGENCIA_HPP
#define VIGENCIA_HPP
#include <string>

using namespace std;
class Vigencia 
{
	private:
		string mes;
		string anio;
	public:
		Vigencia();
		Vigencia(string elMes, string elAnio);
		string getMes();
		string getAnio();
};
#endif

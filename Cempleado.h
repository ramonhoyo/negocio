/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/
#ifndef  CEMPLEADO_H
#define CEMPLEADO_H

#include <iostream>
#include <string>
using namespace std;

	class Cempleado{
		
		
		string nombre;
		float sueldo_diario;
		int dias_trabajados;
		
		public:
		
		Cempleado();
		~Cempleado(){};
		
		string get_nombre();
		float  get_sueldo_diario();
		int get_dias_trabajados();
		virtual float get_sueldo_mensual();
		
		int set_nombre(string);
		int set_sueldo_diario(float);
		int set_dias_trabajados(int);		
	
	};
	

#endif

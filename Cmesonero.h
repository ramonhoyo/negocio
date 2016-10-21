/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en 			una empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/
#ifndef CMESONERO_H
#define CMESONERO_H

#include <Cempleado.h>
using namespace std;	
	
	class Cmesonero: virtual public Cempleado{
	
		float monto_mensual;
		int porcentaje;
		
		public:
		
		Cmesonero();
		~Cmesonero(){};
				
		int set_monto_mensual(float);
		int set_porcentaje(int);
		
		int get_porcentaje();		
		float get_monto_mensual();
		float get_sueldo_mensual();
	
	
	};

#endif

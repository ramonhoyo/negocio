/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/
#ifndef CSUPERVISOR_H
#define CSUPERVISOR_H

#include <Cempleado.h>
using namespace std;

	class Csupervisor :virtual public Cempleado{
	
		float bono;
		
		public:
		
		Csupervisor();
		~Csupervisor(){};
	
		int set_bono(float);
		float get_bono();
		float get_sueldo_mensual();
			
	};


#endif

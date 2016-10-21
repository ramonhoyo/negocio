/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
----------------------------------------------------------------------*/
#ifndef CMESOSUPER_H
#define	CMESOSUPER_H
#include <Cmesonero.h>
#include <Csupervisor.h>

	class Cmesosuper: public Cmesonero, public Csupervisor{
		
		public:

		Cmesosuper();
		~Cmesosuper();
		float get_sueldo_mensual();
	};

#endif

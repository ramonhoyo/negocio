/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/

#include <Cmesosuper.h>

	Cmesosuper::Cmesosuper():Csupervisor(),Cmesonero(){};


	float Cmesosuper::get_sueldo_mensual(){
	
		float sueldo_total=Cmesonero::get_sueldo_mensual()+get_bono();
		return sueldo_total;
	}

/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/

#include <Cmesonero.h>
using namespace std;

	Cmesonero::Cmesonero():Cempleado(){
		this->monto_mensual=0;	
		this->porcentaje=0;
	}

	int Cmesonero::set_monto_mensual(float mon){
		this->monto_mensual=mon;
		return 0;
	}

	int Cmesonero::set_porcentaje(int por){
			if(por<0) por*=-1;
			this->porcentaje=por;
	}

	int Cmesonero::get_porcentaje(){
		return this->porcentaje;
	}

	float Cmesonero::get_monto_mensual(){
		return this->monto_mensual;
	}


	float Cmesonero::get_sueldo_mensual(){

		float sueldo_total;				
			sueldo_total=this->Cempleado::get_sueldo_mensual()+monto_mensual*(porcentaje*0.01);
		return(sueldo_total);
	}



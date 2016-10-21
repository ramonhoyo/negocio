/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/

#include <Csupervisor.h>
using namespace std;

	Csupervisor::Csupervisor():Cempleado(){
		this->bono=0.0;
	}


	int Csupervisor::set_bono(float bon){
		if(bono<0) bono*=-1;
		this->bono=bon;
	}

	float Csupervisor::get_bono(){
		return (this->bono);
	}

	float Csupervisor::get_sueldo_mensual(){

		float sueldo_total=this->Cempleado::get_sueldo_mensual()+this->bono;
		return(sueldo_total);
	}

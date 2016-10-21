/*--------------------------------------------------------------------
	descripcion: clase sencilla para gestionar los sueldos de un empleado en una 			empresa
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/

#include <Cempleado.h>

using namespace std;

	Cempleado::Cempleado(){

		this->nombre="none";
		this->sueldo_diario=0.0;
		this->dias_trabajados=0;

	}

	
/*	Cempleado(string nom,float suel,int dias){
		
		this->nombre=nom;
		if(sueld<0) suel*=-1;
		if(dia>=0&&dia<=31) {
			this->dias_trabajados=dias;
		}
		else this->dias_trabajados=0;		
	
	}

*/
	string Cempleado::get_nombre(){
		return this->nombre;
	}	

	int Cempleado::get_dias_trabajados(){
		return this->dias_trabajados;
	}

	float  Cempleado::get_sueldo_diario(){
		return this->sueldo_diario;
	}

	float Cempleado::get_sueldo_mensual(){
		float sueldo_total=this->sueldo_diario*this->dias_trabajados;
		return (sueldo_total);
	}

	int Cempleado::set_nombre(string nom){

		this->nombre=nom;
		return 0;
	}

	int Cempleado::set_sueldo_diario(float suel){
		if(suel<0) suel*=-1;		
		this->sueldo_diario=suel;
		return 0;
	}

	int Cempleado::set_dias_trabajados(int dias){
		if(dias>=0&&dias<=31) {
			this->dias_trabajados=dias;
			return 0;
		}
		else return 1;				
	}



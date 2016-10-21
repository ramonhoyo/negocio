/*--------------------------------------------------------------------
	descripcion: programa que prueba el conjunto de clases incluidas mas abajo
		para gestionar las nominas de empleados en una tiendas
	autor: Ramon Hoyo
	fecha:13-10-16
	correo:ramonandreshoyodiaz@gmail.com
----------------------------------------------------------------------*/

#include <Cempleado.h>
#include <Csupervisor.h>
#include <Cmesosuper.h>
#include <Cmesonero.h>
#include <iostream>
#include <string>
using namespace std;

	int main(){
		Cempleado *registro[10]{0};
		int tam=0,centinela1=0;
		int  i,tipo=0,_dias,opc;
		float _sueldo;	
		string _nombre;
		Cmesonero *meso_aux;
		Csupervisor *super_aux;
		Cmesosuper *mesosuper_aux;
		
		do{
			cout<<"Cuantos empleado desea registrar\n";
			cin>>tam;
			if(tam>=0&&tam<=10){
				centinela1=1;
			}
			else cout<<"erro tamaño invalido maximo 10\n";
		}while(!centinela1==1);
		
		
			for( i=0;i<tam;i++){
					cout<<"ingrese un nombre = ";
					cin>>_nombre;			
					cout<<"\ningrese los dias trabajados = ";
					cin>>_dias;
					
					cout<<"\ningrese sueldo diario = ";
					cin>>_sueldo;
					
					cout<<"\ningrese un tipo de empleado\n1- mesonero  2-supervior 3-mesonero&supervisor -otro caso empleado";
					cin>>opc;	
					
					switch(opc){
						case 1:
								registro[i]=new Cmesonero();
								registro[i]->set_nombre(_nombre);
								registro[i]->set_dias_trabajados(_dias);
								registro[i]->set_sueldo_diario(_sueldo);
								meso_aux=dynamic_cast<Cmesonero*>(registro[i]);
								cout<<"\ningrese un monto de ventas mensual=   ";
								cin>>_sueldo;
								meso_aux->set_monto_mensual(_sueldo);
								cout<<"\ningrese un porcentaje de ganacia por ventas mensuales=  ";
								cin>>_dias;
								meso_aux->set_porcentaje(_dias);
								break;
								
						case 2:
								registro[i]=new Csupervisor();

								registro[i]->set_nombre(_nombre);
								registro[i]->set_dias_trabajados(_dias);
								registro[i]->set_sueldo_diario(_sueldo);
								super_aux=dynamic_cast<Csupervisor*>(registro[i]);
								cout<<"\ningrese un bono por supervisor =   ";
								cin>>_sueldo;
								super_aux->set_bono(_sueldo);
								break;
								
						case 3:
								registro[i]=new Cmesosuper();

								registro[i]->set_nombre(_nombre);
								registro[i]->set_dias_trabajados(_dias);
								registro[i]->set_sueldo_diario(_sueldo);
								mesosuper_aux=dynamic_cast<Cmesosuper*>(registro[i]);		
								cout<<"\ningrese un monto de ventas mensual =   ";
								cin>>_sueldo;
								mesosuper_aux->set_monto_mensual(_sueldo);
								cout<<"\ningrese un porcentaje de ganacia por ventas mensuales =  ";
								cin>>_dias;
								mesosuper_aux->set_porcentaje(_dias);
								cout<<"\ningrese un bono por supervisor =  ";
								cin>>_sueldo;
								mesosuper_aux->set_bono(_sueldo);
								break;
						
						default:
								registro[i]=new Cempleado();
								registro[i]->set_nombre(_nombre);
								registro[i]->set_dias_trabajados(_dias);
								registro[i]->set_sueldo_diario(_sueldo);
								break;											
								
					}
			}//end for
			
			cout<<"		nomina ";
			
			for(i=0;i<tam;i++){
				centinela1=0;
				cout<<"\nnombre : "<<registro[i]->get_nombre();
				cout<<" ,  sueldo mensual = "<<registro[i]->get_sueldo_mensual();
			}

	return 0;
	}

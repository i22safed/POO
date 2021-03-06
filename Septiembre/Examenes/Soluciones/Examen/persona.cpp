#include<iostream>
#include<cstdlib>
#include<cstdio>
#include"persona.hpp"

using namespace std;
using namespace poo;
	Persona::Persona(string nombre,string apellidos,int edad){
		_nombre=nombre;
		_apellidos=apellidos;
		_edad=edad;
		}
	Persona::Persona(const Persona &p){
		_nombre=p._nombre;
		_apellidos=p._apellidos;
		_edad=p._edad;
		}
	void Persona::leerPersona(){
		string nombre,apellidos;
		int edad;
		cout << "Introduzca el nombre de la persona\n";
		cin >> nombre;
		Persona::setNombre(nombre);
		cout << "Introduzca los apellidos de la persona\n";
		cin >> apellidos;
		Persona::setApellidos(apellidos);
		cout << "Introduzca la edad de la persona\n";
		cin >> edad;
		Persona::setEdad(edad);
		}
	void Persona::escribirPersona(){
		string nombre,apellidos;
		int edad;
		nombre=Persona::getNombre();
		apellidos=Persona::getApellidos();
		edad=Persona::getEdad();
		cout << "Nombre: " << nombre << "\nApellidos: "<< apellidos << "\nEdad: " << edad <<"\n";

}

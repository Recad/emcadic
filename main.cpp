/*
 * main.cpp
 * 
 * Copyright 2020 Dacer <dacer@dacer-pc>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include "generator.cpp"
#include <cstdlib>

//primer argumento sera numero base de telefono
//segundo argumento sera la sensibilidad
//tercer argumento sera el nombre del diccionario
int main(int argc, char *argv[])
{
	generator generador;

	if (argc == 4)
	{

		if (atoi(argv[2])>7)
		{
			cout<<"La sensibilidad no puede ser mayor a la cantidad de numeros del numero base"<<endl;
			return 1;
		}
		string str(argv[1]);
		//cout<<str.substr(0,atoi(argv[2]))<<endl;
		generador.SetNumbase(stoi(str.substr(0,atoi(argv[2]))));
		generador.SetSensibility(atoi(argv[2]));
		generador.SetFilename(argv[3]);

		generador.CrearDiccionario();
	}else
	{
		//cout<<atoi(argv[1])<<endl;
		//cout<<atoi(argv[2])<<endl;
		//cout<<argv[3]<<endl;	
		cout<<"Argumentos de entrada invalidos"<<endl;
			return 1;
	}
	
	return 0;
}


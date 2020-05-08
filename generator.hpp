/*
 * generator.hpp
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
#include <string>
#include <fstream>
#include <math.h>
#include <stdio.h>
using namespace std;  
#ifndef GENERATOR_HPP
#define GENERATOR_HPP

class generator
{
	public:
		generator();
		virtual ~generator();
		//setters
		void SetNumbase(int);
		void SetSensibility(int);
		void SetFilename(string);
		//getters
		int GetNumbase();
		int GetSensibility();
		string GetFilename();
		//create functions
		void CrearDiccionario();
		long int CalcularTopeSup();
		long int CalcularTopeInf();
	
	private:
		int numbase;
		int sensibility;
		string filename;
		const int passlength = 10;
		
};

#endif /* GENERATOR_HPP */ 

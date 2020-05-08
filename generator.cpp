/*
 * generator.cpp
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


#include "generator.hpp"


generator::generator()
{
	
}


generator::~generator()
{
	
}

int generator::GetNumbase(){
    return this->numbase;
}

void generator::SetNumbase(int numbase) {
    this->numbase = numbase;
}

int generator::GetSensibility() {
    return this->sensibility;
}
void generator::SetSensibility(int sensibility) {
    this->sensibility = sensibility;
}

string generator::GetFilename(){
    return this->filename;
}

void generator::SetFilename(string filename){
    this->filename=filename;
}


long int generator::CalcularTopeInf(){
    
    long int factor = (passlength - this->sensibility);
    
    long int topeInf = (this->numbase * pow(passlength,factor));
    
    return topeInf;
}

long int generator::CalcularTopeSup(){
    
    long int factor = (passlength - this->sensibility);

    long int topeSup = (this->numbase * pow(passlength,factor))+pow(passlength,factor);

    return topeSup;
}

void generator::CrearDiccionario(){
    try
    {
        ofstream fs(this->filename);
        long int min = this->CalcularTopeInf();
        long int max = this->CalcularTopeSup();
        
        for (min; min < max ; min++)
        {
            fs <<min<< endl;
        }
        fs.close();
    }
    catch(const std::exception& e)
    {
       cout<<"error al crear el archivo"<<endl;
    }
    
    

}


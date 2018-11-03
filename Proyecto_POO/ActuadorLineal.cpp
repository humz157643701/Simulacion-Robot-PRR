/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ActuadorLineal.cpp
 * Author: emiliano
 *
 * Created on 3 de noviembre de 2018, 19:50
 */

#include "ActuadorLineal.h"
#include "Conjunto.h"

ActuadorLineal::ActuadorLineal(int ID) {
  this->setId(ID);
  this->setTipo("Actuador Lineal");
  this->setPeso(250);
  this->setDescripcion("Actuador que permite el movimiento en Z");

  this->veline_max = 50; //En mm/s
  this->veline_min = 0.5;
}

ActuadorLineal::ActuadorLineal(const ActuadorLineal& orig) {
}

ActuadorLineal::~ActuadorLineal() {
}

void ActuadorLineal::setVelActual(float velocidad){
    this->vel_actual = velocidad;
}

float ActuadorLineal::getVelActual() const{
    return this->vel_actual;
}

float ActuadorLineal::getVelLine_max() const{
    return this->veline_max;
}

float ActuadorLineal::getVelLine_min() const{
    return this->veline_min;
}

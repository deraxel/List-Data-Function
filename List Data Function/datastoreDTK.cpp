#include "stdafx.h"
#include "datastoreDTK.h"

void dataStoreDTK::setThing(int index,float val){
	thing[index]=val;
}

float dataStoreDTK::getThing(int index) const{
	return thing[index];
}
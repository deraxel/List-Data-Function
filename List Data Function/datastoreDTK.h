#pragma once

class dataStoreDTK{
private:
	float thing[4];//MAY DELETE/MODIFY
	/***********************
	USER VARIABLES
	***********************/
public:
	dataStoreDTK()=default;
	void setThing(int index,float val);//MAY DELETE/MODIFY (INDEX REFERS TO INDEX OF THE float thing var)
	float getThing(int index)const;//MAY DELETE/MODIFY (INDEX REFERS TO INDEX OF THE float thing var)
	/***********************
	USER FUNCTIONS
	***********************/
};
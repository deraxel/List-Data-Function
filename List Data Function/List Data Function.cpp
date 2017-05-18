// List Data Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "tunnelDTK.h"
#include <iostream>
using namespace std;


int main()
{
	static constexpr int totDep=1000;
	TunnelDTK tunnel=TunnelDTK();//creates 0 value (surface item)
	tunnel.createTunnel(totDep);//this creates the list (currently fixed)items will be indexed from 0 (surface item) to totDep-1
	float tempFloat=.17f;
	for(int i=0; i<totDep; i++){
		for(int i2=0; i2<4; i2++){
			tunnel.dataFile(i).setThing(i2,((i+i2)*tempFloat));
		}//"tunnel.dataFile(index)."  will call a specific data item from the datastoreDTK through VAR.dataFile(INDEX).FUNCTION access to datastoreDTK can be made.
	}
	for(int index=0; index<totDep; index++){
		cout<<endl<<tunnel.dataFile(index).getThing(0)<<" "
			<<tunnel.dataFile(index).getThing(1)<<" "
			<<tunnel.dataFile(index).getThing(2)<<" "
			<<tunnel.dataFile(index).getThing(3)<<" "<<endl;
	}
	system("pause");
    return 100;
}


#pragma once
#include "datastoreDTK.h"

class TunnelDTK{
public:
	TunnelDTK();
	TunnelDTK(int const oldDepth);
private:
	int tunnelDepth;
	dataStoreDTK data;
public:
	void createTunnel(int const depth);
	TunnelDTK*dig(int const depth);
	TunnelDTK*tunnel;
	dataStoreDTK& dataFile(int const depth);
};

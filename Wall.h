#pragma once
#include "Materials.h"

class Wall
{
	Material material;
public:
	Wall(Material _material) : material(_material) {};

	Material getMaterial() const { return material; }
};


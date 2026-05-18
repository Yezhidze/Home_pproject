#pragma once
#include "Materials.h"

class Roof
{
public:
	Material material;
public:
	Roof(Material _material) : material(_material) {};

	Material getMaterial() const { return material; }
};


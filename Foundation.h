#pragma once
#include "Materials.h"

class Foundation
{
public:
	Material material;
public:
	Foundation(Material _material) : material(_material) {};

	Material getMaterial() const { return material; }
};


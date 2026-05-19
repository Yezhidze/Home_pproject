#pragma once
#include <iostream>
#include "Materials.h"
#include "Roof.h"
#include "Wall.h"
#include "Foundation.h"

class House
{
	Wall wall;
	Roof roof;
	Foundation foundation;
public:
	House(const Wall& _wall, const Roof& _roof, const Foundation& _foundation) 
		: wall(_wall), roof(_roof), foundation(_foundation) {};

    void show() const 
    {
        cout << "Стены: ";
        if (wall.getMaterial() == Material::Wood)
            cout << "деревянные" << endl;
        else if (wall.getMaterial() == Material::Brick)
            cout << "кирпичные" << endl;

        cout << "Крыша: ";
        if (roof.getMaterial() == Material::Wood)
            cout << "деревянная" << endl;
        else if (wall.getMaterial() == Material::Brick)
            cout << "кирпичная" << endl;

        cout << "Фундамент: ";
        if (foundation.getMaterial() == Material::Wood)
            cout << "деревянный" << endl;
        else if (wall.getMaterial() == Material::Brick)
            cout << "кирпичный" << endl;
    }
};


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
        // Стены
        cout << "Стены: ";
        if (wall.getMaterial() == Material::Wood)
            cout << "деревянные";
        else
            cout << "кирпичные";
        cout << endl;

        // Крыша
        cout << "Крыша: ";
        if (roof.getMaterial() == Material::Wood)
            cout << "деревянная";
        else
            cout << "кирпичная";
        cout << endl;

        // Фундамент
        cout << "Фундамент: ";
        if (foundation.getMaterial() == Material::Wood)
            cout << "деревянный";
        else
            cout << "кирпичный";
        cout << endl;
    }
};


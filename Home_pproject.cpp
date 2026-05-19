#include <iostream>
#include "Materials.h"
#include "Roof.h"
#include "Wall.h"
#include "Foundation.h"
#include "House.h"
#include "HouseBUilder.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");

    WoodenHouseBuilder woodBuilder;
    woodBuilder.buildFoundation();
    woodBuilder.buildWalls();
    woodBuilder.buildRoof();
    House woodHouse = woodBuilder.getHouse();
    woodHouse.show();

    BrickHouseBuilder brickBuilder;
    brickBuilder.buildFoundation();
    brickBuilder.buildWalls();
    brickBuilder.buildRoof();
    House brickHouse = brickBuilder.getHouse();
    brickHouse.show();
}

/*
Создать набор классов по созданию дома.
У дома могут быть стены, крыша и фундамент из разных материалов.

Окнами и дверьми и т.п. принебрегаем. 
Этажность дома - 1 этаж.

Создать возможность возведения деревянного дома
или кирпичного или полностью разросненные материалы.*/
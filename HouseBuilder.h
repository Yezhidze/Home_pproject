#pragma once
#include "Materials.h"
#include "Roof.h"
#include "Wall.h"
#include "Foundation.h"
#include "House.h"

class HouseBuilder
{
public:
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildFoundation() = 0;
    virtual House getHouse() = 0;
};

class WoodenHouseBuilder : public HouseBuilder
{
    Wall* wall;
    Roof* roof;
    Foundation* foundation;
public:
    WoodenHouseBuilder() : wall(nullptr), roof(nullptr), foundation(nullptr) {}
    void buildWalls() override
    {
        wall = new Wall(Material::Wood);
    }
    void buildRoof() override
    {
        roof = new Roof(Material::Wood);
    }
    void buildFoundation() override
    {
        foundation = new Foundation(Material::Wood);
    }


    House getHouse() override
    {
        return House(*wall, *roof, *foundation);
    }
    ~WoodenHouseBuilder()
    {
        delete wall; delete roof; delete foundation;
    }
};

class BrickHouseBuilder : public HouseBuilder
{
    Wall* wall;
    Roof* roof;
    Foundation* foundation;
public:
    BrickHouseBuilder() : wall(nullptr), roof(nullptr), foundation(nullptr) {}
    void buildWalls() override
    {
        wall = new Wall(Material::Brick);
    }
    void buildRoof() override
    {
        roof = new Roof(Material::Brick);
    }
    void buildFoundation() override
    {
        foundation = new Foundation(Material::Brick);
    }
    House getHouse() override
    {
        return House(*wall, *roof, *foundation);
    }
    ~BrickHouseBuilder()
    {
        delete wall; delete roof; delete foundation;
    }
};

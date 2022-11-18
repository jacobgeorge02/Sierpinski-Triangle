// "Copyright 3/1/2022 Jacob George"
#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
#include <memory>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Triangle : public sf::Drawable {
 public:
        Triangle(double length, double x, double y);
        double getLength() { return sizeOfRecursiveTriangle; }
        void setLength(double length) { sizeOfRecursiveTriangle = length; }

       sf::ConvexShape getTriangle(void) const;

 private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates s) const { // NOLINT
            target.draw(shape, s);
        }

        double sizeOfRecursiveTriangle;

        double xCor;
        double yCor;

        double xCor2;
        double yCor2;

        double xCor3;
        double yCor3;

        sf::ConvexShape shape;
};

void fTree(double len, int dep, double x, double y, std::vector<Triangle> &TV); // NOLINT

#endif

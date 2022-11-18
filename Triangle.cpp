// "Copyright 3/1/2022 Jacob George"
#include <iostream>
#include <cmath>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Triangle.h"

Triangle::Triangle(double length, double x, double y) {
    sizeOfRecursiveTriangle = length;
    xCor = x;
    yCor = y;

    xCor2 = x + length;
    yCor2 = y;

    xCor3 = x + (length / 2);
    yCor3 = y + (length * (sqrt(3)/2));
}

sf::ConvexShape Triangle::getTriangle(void) const {
    sf::ConvexShape s;
    s.setPointCount(3);
    s.setPoint(0, sf::Vector2f(xCor, yCor));
    s.setPoint(1, sf::Vector2f(xCor2, yCor2));
    s.setPoint(2, sf::Vector2f(xCor3, yCor3));
    s.setFillColor(sf::Color::Transparent);
    s.setOutlineThickness(3);
    return s;
}

// "Copyright 3/1/2022 Jacob George"
#include "Triangle.h"
#include <iostream>
#include <cmath>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main(int argc, char* argv[]) {
    double L = std::stod(argv[1]);
    sf::RenderWindow window(sf::VideoMode(L * 4, L * 4), "Triangle");
    std::vector<Triangle> TVec;

    int N = std::stod(argv[2]);

    fTree(L, N, ((L*4)/2)-(L/2), (L*4)/2-
    (sqrt((pow(L, 2)-pow(L/2, 2)))/2), TVec);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
            window.close();
        }
        window.clear(sf::Color::Blue);

        for (const auto& Triangle : TVec) {
            window.draw(Triangle.getTriangle());
        }

        window.display();
    }
    return 0;
}

void fTree(double len, int dep, double x, double y, std::vector<Triangle> &TV) { // NOLINT
    if (dep > 0) {
        Triangle base(len, x, y);
        TV.push_back(base);

        fTree(len / 2, dep-1, x, y + (len * (sqrt(3) / 2)), TV);
        fTree(len / 2, dep-1, x + len, y, TV);
        fTree(len / 2, dep-1, x - (len / 4), y - (len * (sqrt(3) / 4)), TV);
    }
}

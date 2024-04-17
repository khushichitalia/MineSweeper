#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <string>
#include <SFML/Graphics.hpp>
#include "config.h"
#include "Helper.cpp"
#include <SFML/Window.hpp>
using namespace std;

class Welcome {
    public:
        sf::RenderWindow window;
        sf::Font font;
        sf::Text welcomeStr;
        sf::Text nameStr;
        sf::Text userStr;

        Welcome() {   
            Config windowConfig("files/config.cfg");
            window.create(sf::VideoMode(windowConfig.width, windowConfig.height), "MineSweeper");

            if (!font.loadFromFile("files/font.ttf")) {
                cout << "Font not loaded!!!" << endl;
            }

            welcomeStr.setFont(font);
            welcomeStr.setCharacterSize(24);
            welcomeStr.setFillColor(sf::Color::White);
            welcomeStr.setStyle(sf::Text::Underlined | sf::Text::Bold);
            welcomeStr.setString("WELCOME TO MINESWEEPER!");
            setText(welcomeStr, windowConfig.width/2, (windowConfig.height/2) - 150);

            nameStr.setFont(font);
            nameStr.setCharacterSize(20);
            nameStr.setFillColor(sf::Color::White);
            nameStr.setStyle(sf::Text::Bold);
            nameStr.setString("Enter your name: ");
            setText(nameStr, windowConfig.width/2, (windowConfig.height/2) - 75);

            userStr.setFont(font);
            userStr.setCharacterSize(18);
            userStr.setFillColor(sf::Color::Yellow);
            userStr.setStyle(sf::Text::Bold);
            setText(userStr, windowConfig.width/2, (windowConfig.height/2) - 45);
        }
};
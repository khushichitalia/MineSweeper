#include <iostream>
#include <SFML/Graphics.hpp>
#include "Welcome.cpp"

int main() {
//    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML Works!");
//    sf::CircleShape shape(100.f);
//    shape.setFillColor(sf::Color::Red);
    Welcome welcome;
    while(welcome.window.isOpen()) {
        sf::Event event;
        while(welcome.window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                welcome.window.close();
            }
        }

        welcome.window.clear(sf::Color::Blue);
        welcome.window.draw(welcome.welcomeStr);
        welcome.window.draw(welcome.nameStr);
        welcome.window.draw(welcome.userStr);
//        welcome.window.draw(welcome.welcomeStr);
//        welcome.window.draw(welcome.welcomeStr);
        welcome.window.display();
    }
    return 0;
}

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

//int main()
//{
//    // Create the main window
//    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
//
//    // Create a graphical text to display
//    sf::Font font;
//    if (!font.loadFromFile("files/font.ttf"))
//        return EXIT_FAILURE;
//    sf::Text text("Hello SFML", font, 50);
//
//    // Start the game loop
//    while (window.isOpen())
//    {
//        // Process events
//        sf::Event event;
//        while (window.pollEvent(event))
//        {
//            // Close window: exit
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        // Clear screen
//        window.clear();
//
//        // Draw the string
//        window.draw(text);
//
//        // Update the window
//        window.display();
//    }
//
//    return EXIT_SUCCESS;
//}

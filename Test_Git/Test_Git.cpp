#include <iostream>
#include <string>
#include <algorithm>

int Triangle() {
    std::cout << "Base of your triangle:" << std::endl;
    int In;
    std::cin >> In;

    In = In / 2;
    In--;
    int k;

    for (int i = In; i != 0; i--) {

        for (k = 0; k <= i; k++) {
            std::cout << ' ';
        }
        std::cout << '/';
        for (k = 0; k <= (In - i) * 2 - 1; k++) {
            std::cout << ' ';
        }
        std::cout << '\\' << std::endl;
    }
    std::cout << " /";
    for (int j = 0; j != In * 2; j++) {
        std::cout << '_';
    }
    std::cout << '\\' << std::endl;

    return 1;
}

int Rectangle(bool square) {
    int l;
    int w;



    if (!square) {
        std::cout << "What is the length of your rectangle" << std::endl;
        std::cin >> l;

        std::cout << "What is the width of your rectangle" << std::endl;
        std::cin >> w;
    }
    else {
        std::cout << "What is the length of your square" << std::endl;
        std::cin >> l;
        w = l;
    }

    l -= 1;
    l /= 2.1;

    std::string row = "|";
    std::string end_row = "+";
    for (int i = 0; i <= w - 3; i++) {
        end_row += '-';
        row += " ";
    }

    end_row += '+';
    row += "|";

    std::cout << end_row << std::endl;
    for (l; l != 0; l--) {
        std::cout << row << std::endl;
    }
    std::cout << end_row << std::endl;


    return 1;
}

int Circle() {
    int radius;

    std::cout << "What is the radius of you circle" << std::endl;
    std::cin >> radius;

    int i, j;
    for (i = 0; i <= 2 * radius; i++)
    {

        for (j = 0; j <= 2 * radius; j++)
        {


            double distance = sqrt((double)(i - radius) * (i - radius) + (j - radius) * (j - radius));
            if (distance > radius - 0.65 && distance < radius + 0.2)
            {
                std::cout << "**";

            }
            else
            {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}

int main() {
    std::cout << "What shape do you want to draw? (triangle[t], rectangle[r], square[s], circle[c]):" << std::endl;

    std::string choice;
    std::cin >> choice;

    transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

    if (choice == "triangle" || choice == "t") {
        Triangle();
    }
    else if (choice == "rectangle" || choice == "r") {
        Rectangle(false);
    }
    else if (choice == "square" || choice == "s") {
        Rectangle(true);
    }
    else if (choice == "circle" || choice == "c") {
        Circle();
    }
    else if (choice == "quit" || choice == "q") {
        return 1;
    }
    else {
        std::cout << "Sorry, I haven't learned that shape" << std::endl;
    }

    main();
}



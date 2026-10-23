#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("../People-2.txt");

    if (!inputFile)
    {
        cout << "Error opening people.txt file." << endl;
        return 1;
    }

    int population;
    int year = 1910;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(Each * represents 1000 people)" << endl;

    while (inputFile >> population)
    {
        cout << year << " ";

        int stars = (population + 500) / 1000;

        for (int i = 0; i < stars; i++)
        {
            cout << "*";
        }

        cout << endl;
        year += 20;
    }

    inputFile.close();

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

struct Player 
{
    string name;
    string position;
    int yards;
};
void readPlayerStats(Player players[], int size, const string& filename) 
{
    ifstream inputFile(filename);
    for (int i = 0; i < size; i++) 
    {
        inputFile >> players[i].name >> players[i].position >> players[i].yards;
    }
    inputFile.close();
}
int calculateTotalYards(const Player players[], int size) 
{
    int totalYards = 0;
    for (int i = 0; i < size; i++) 
    {
        totalYards += players[i].yards;
    }
    return totalYards;
}
void displayPlayerStats(const Player players[], int size) 
{
    cout << left << setw(15) << "Player Name"<< setw(10) << "Position"<< "Yards Gained" << endl;
 cout << string(40, '-') << endl;

    for (int i = 0; i < size; i++) 
    {
        cout << left << setw(15) << players[i].name
            << setw(10) << players[i].position
            << players[i].yards << endl;
    }
}
int main() {
    const int teamSize = 11; 
    Player players[teamSize];
    readPlayerStats(players, teamSize, "nfl_team.txt");
    int totalYards = calculateTotalYards(players, teamSize);
    cout << "Total Yards Gained by the Team: " << totalYards << endl << endl;
    displayPlayerStats(players, teamSize);

    return 0;
}

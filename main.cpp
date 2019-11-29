#include <iostream>
#include <algorithm>
#include "Player.h"

using namespace std;

void decode(string cmd)
{
    if(cmd == "help") {
        cout << "  exit: exit app" << endl;
    }
}

int main()
{
    Player* player = new Player();
    for_each(
        player->GettracksList()->begin(),
        player->GettracksList()->end(),
        [](string trackName) {
             cout << trackName << endl;
        }
    );

    string input;
    cout << "==========================" << endl;
    cout << "Console:" << endl;

    while (input != "exit") {
        cout << "#>" ;
        cin  >> input;
        decode(input);
        cout << input << endl;
    }
    return 0;
}

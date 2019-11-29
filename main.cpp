#include <iostream>
#include <string>
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

        try {
            if (input == "exit"){
               cout << "\n  Goodbye, my friend !!!" << endl;
            }
            else if (input == "play"){
                player->Getstate()->onPlay();
            }
            else if (input == "stop") {
                player->Getstate()->onStop();
            }
            else {
               cout << "\n  Available commands:" << endl;
               cout << "  play" << endl;
               cout << "  stop" << endl;
               cout << "  help" << endl;
               cout << "  exit" << endl;
            }
        }
        catch (char const* errorMessage) {
            cout << errorMessage << endl;
        }
    }
    return 0;
}

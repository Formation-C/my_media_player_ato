#include <iostream>
#include "StoppedState.h"
#include "PlayingState.h"

StoppedState::~StoppedState()
{
    //dtor
    std::cout << "Deleted StoppedState" << std::endl;
}

void StoppedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayback() << std::endl;
    delete this;
}

void StoppedState::onStop()
{
    throw "Error: Player already stopped";
}

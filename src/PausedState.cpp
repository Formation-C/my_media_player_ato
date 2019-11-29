#include "PausedState.h"
#include "PlayingState.h"
#include "StoppedState.h"
#include <iostream>

PausedState::~PausedState()
{
    //dtor
}

void PausedState::onPlay()
{
    player->Setstate(new PlayingState(player));
    std::cout << player->startPlayback()  << std::endl;
    delete this;
}

void PausedState::onStop()
{
    player->Setstate(new StoppedState(player));
    std::cout << player->stopPlayback()  << std::endl;
    delete this;
}

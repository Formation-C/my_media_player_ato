#include "Player.h"

#include "StoppedState.h"

Player::Player()
{
    //ctor
    Setplaying(false);
    SetcurrentTrack(0);
    tracksList = new std::vector<std::string>();
    for(int ii = 0; ii < 12; ii++) {
        tracksList->push_back("Track " + std::to_string(ii));
    }
    Setstate(new StoppedState(this));
}

Player::~Player()
{
    //dtor
    delete tracksList;
}

std::string Player::startPlayback() {
    Setplaying(true);
    return "Playing " + tracksList->at(currentTrack);
}

std::string Player::pausePlayback() {
    Setplaying(false);
    return "Paused " + tracksList->at(currentTrack);
}
std::string Player::stopPlayback() {
    currentTrack = 0;
    return "Stopped " + tracksList->at(currentTrack);
}

std::string Player::nextTrack() {
    currentTrack++;
    currentTrack %= tracksList->size();
    return "Playing " + tracksList->at(currentTrack);
}

std::string Player::previousTrack() {
    currentTrack--;
    currentTrack %= tracksList->size();
    return "Playing " + tracksList->at(currentTrack);
}

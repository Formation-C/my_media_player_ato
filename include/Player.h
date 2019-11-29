#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>

class State;

class Player
{
    public:
        Player();
        virtual ~Player();

        bool Getplaying() { return playing; }
        void Setplaying(bool val) { playing = val; }
        std::vector<std::string>* GettracksList() { return tracksList; }
        void SettracksList(std::vector<std::string>* val) { tracksList = val; }
        int GetcurrentTrack() { return currentTrack; }
        void SetcurrentTrack(int val) { currentTrack = val; }
        State* Getstate() { return state; }
        void Setstate(State* val) { state = val; }

        std::string startPlayback();
        std::string pausePlayback();
        std::string stopPlayback();
        std::string nextTrack();
        std::string previousTrack();
    protected:

    private:
        bool playing;
        std::vector<std::string>* tracksList;
        int currentTrack;
        State* state;
};

#endif // PLAYER_H

#ifndef PLAYINGSTATE_H
#define PLAYINGSTATE_H

#include <State.h>


class PlayingState : public State
{
    public:
        using State::State;
        virtual ~PlayingState();
        void onPlay();
        void onStop();
    protected:

    private:
};

#endif // PLAYINGSTATE_H

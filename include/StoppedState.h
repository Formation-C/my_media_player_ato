#ifndef STOPPEDSTATE_H
#define STOPPEDSTATE_H

#include <State.h>


class StoppedState : public State
{
    public:
        using State::State;//();

        StoppedState();
        virtual ~StoppedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // STOPPEDSTATE_H

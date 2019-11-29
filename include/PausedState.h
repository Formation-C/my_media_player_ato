#ifndef PAUSEDSTATED_H
#define PAUSEDSTATED_H

#include <State.h>


class PausedState : public State
{
    public:
        using State::State;
        virtual ~PausedState();

        void onPlay();
        void onStop();

    protected:

    private:
};

#endif // PAUSEDSTATED_H

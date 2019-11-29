#ifndef STATE_H
#define STATE_H

class Player;

class State
{
    public:
        State(Player* _player);
        virtual ~State();

        Player* GetPlayer() { return player; }
        void SetPlayer(Player* val) { player = val; }

        virtual void onPlay() = 0;
        virtual void onStop() = 0;

    protected:
        Player* player;

    private:
};

#endif // STATE_H

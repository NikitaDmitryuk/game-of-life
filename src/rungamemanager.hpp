#ifndef RUN_GAME_MANAGER_HPP
#define RUN_GAME_MANAGER_HPP

#include "space.hpp"
#include "cell.hpp"
#include <memory>

class RunGameManager
{
    public:
        void initializeLife(double density);
        void nextStep();
        Space getSpace();

    private:
        shared_ptr<Space> _space;
};

#endif

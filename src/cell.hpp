#ifndef CELL_HPP
#define CELL_HPP

#include <Eigen/Dense>
using Eigen::Vector3d;

class Cell
{
    public:
        Cell();
        Cell(Eigen::Vector3d position);
        ~Cell();
        void setPosition(Eigen::Vector3d);
        Eigen::Vector3d getPosition();
    
    private:
        Eigen::Vector3d _position;
};

#endif

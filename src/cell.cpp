#include "cell.hpp"

Cell::Cell(){

};

Cell::Cell(Eigen::Vector3d position){
    _position = position;
}

Cell::~Cell(){
    
};

void Cell::setPosition(Eigen::Vector3d position){
    _position = position;
}

Eigen::Vector3d Cell::getPosition(){
    return _position;
}

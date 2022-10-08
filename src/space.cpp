#include "space.hpp"

Space::Space(){};

Space::~Space(){};

Space::Space(Eigen::Vector3d spaceSize){
    _spaceSize = spaceSize;
}

Eigen::Vector3d Space::getSpaceSize(){
    return _spaceSize;
}

void Space::setSpaceSize(Eigen::Vector3d spaceSize){
    _spaceSize = spaceSize;
}

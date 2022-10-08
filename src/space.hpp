#ifndef SPACE_HPP
#define SPACE_HPP

#include <Eigen/Dense>

class Space
{   
public:
    Space();
    Space(Eigen::Vector3d spaceSize);
    ~Space();
    void setSpaceSize(Eigen::Vector3d spaceSize);
    Eigen::Vector3d getSpaceSize();

private:
    Eigen::Vector3d _spaceSize;
};

#endif

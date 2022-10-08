#include "cell.hpp"
#include <iostream>

int main(){
    Eigen::Vector3d v(1,2,0);
    Cell cell = Cell(v);
    std::cout << cell.getPosition();
    return 0;
}

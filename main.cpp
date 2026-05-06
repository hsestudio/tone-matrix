#include <iostream>
#include "ToneMatrix.h"

int main() {
    // Create a 4x4 ToneMatrix
    ToneMatrix matrix(4, 4);
    
    // Activate some cells
    matrix.activateCell(0, 0);
    matrix.activateCell(1, 1);
    matrix.activateCell(2, 2);
    matrix.activateCell(3, 3);
    
    std::cout << "ToneMatrix Demo" << std::endl;
    std::cout << "===============" << std::endl;
    std::cout << "Matrix size: " << matrix.getRows() << " x " << matrix.getCols() << std::endl;
    
    // Play the first column
    std::cout << "\nPlaying column 0:" << std::endl;
    matrix.playColumn(0);
    
    // Play the first row
    std::cout << "\nPlaying row 0:" << std::endl;
    matrix.playRow(0);
    
    // Play all columns
    std::cout << "\nPlaying all columns:" << std::endl;
    matrix.playAll();
    
    // Check cell state
    std::cout << "\nCell (0,0) is " << (matrix.isCellActive(0, 0) ? "active" : "inactive") << std::endl;
    std::cout << "Cell (0,1) is " << (matrix.isCellActive(0, 1) ? "active" : "inactive") << std::endl;
    
    return 0;
}

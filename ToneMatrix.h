#ifndef TONEMATRIX_H
#define TONEMATRIX_H

#include "StringInstrument.h"
#include <vector>

class ToneMatrix {
public:
    ToneMatrix(int rows, int cols);
    ~ToneMatrix();
    
    void activateCell(int row, int col);
    void deactivateCell(int row, int col);
    bool isCellActive(int row, int col) const;
    
    void playColumn(int col);
    void playRow(int row);
    void playAll();
    
    void clear();
    
    int getRows() const { return rows; }
    int getCols() const { return cols; }
    
private:
    int rows;
    int cols;
    std::vector<std::vector<bool>> matrix;
    StringInstrument instrument;
};

#endif // TONEMATRIX_H

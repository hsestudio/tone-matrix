#include "ToneMatrix.h"

ToneMatrix::ToneMatrix(int rows, int cols)
    : rows(rows), cols(cols), matrix(rows, std::vector<bool>(cols, false)) {
}

ToneMatrix::~ToneMatrix() {
}

void ToneMatrix::activateCell(int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        matrix[row][col] = true;
    }
}

void ToneMatrix::deactivateCell(int row, int col) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        matrix[row][col] = false;
    }
}

bool ToneMatrix::isCellActive(int row, int col) const {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        return matrix[row][col];
    }
    return false;
}

void ToneMatrix::playColumn(int col) {
    if (col >= 0 && col < cols) {
        for (int row = 0; row < rows; ++row) {
            if (matrix[row][col]) {
                instrument.playNote(row);
            }
        }
    }
}

void ToneMatrix::playRow(int row) {
    if (row >= 0 && row < rows) {
        for (int col = 0; col < cols; ++col) {
            if (matrix[row][col]) {
                instrument.playNote(col);
            }
        }
    }
}

void ToneMatrix::playAll() {
    for (int col = 0; col < cols; ++col) {
        playColumn(col);
    }
}

void ToneMatrix::clear() {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            matrix[row][col] = false;
        }
    }
}

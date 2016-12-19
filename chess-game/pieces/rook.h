#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook : public Piece {
public:
    Rook(Color color);
    std::vector<Coordinate> getPossibleMoves(Coordinate currentPosition);
    Piece* getCopy() const;
};

#endif // ROOK_H

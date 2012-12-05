#ifndef BOARD_IN_GM
#define BOARD_IN_GM

#include "board.h"
#include "chain_set.h"

typedef char PlayerColor;
const PlayerColor BLACK_PLAYER = 0;
const PlayerColor WHITE_PLAYER = 1;



template <BoardLen BOARD_LEN>
class BoardInGm
{
public:
    explicit BoardInGm() {}

    bool Move(PlayerColor color, const Position &pos);

#ifdef FOO_TEST
    static void TEST();
#endif

private:
    bool IsMoveSuiside(PlayerColor color, const Position &pos) const;

    void RemoveChain(const Position &pos, PlayerColor color);

    bool IsRealEye(const Position &pos, PlayerColor color) const;

    Board<BOARD_LEN> board_;
    ChainSet<BOARD_LEN> chain_sets_[2];
};



#include "board_in_gm-TLT.h"

#ifdef FOO_TEST
#include "board_in_gm_TEST.h"
#endif

#endif
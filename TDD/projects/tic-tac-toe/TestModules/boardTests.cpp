#include <gmock/gmock.h>
#include <array>
#include "../External/Interfaces/Field.hpp"
#include "../External/Interfaces/Position.hpp"


class Board{
private:
    std::array<Field, 10> fields;

    inline bool isRowFilledWithOneSymbol(unsigned int rowNum, Field symbol){
        if((rowNum<1) || (rowNum>3)){
            // logic error
            return false;
        }{
            return (fields[1+(rowNum-1)*3]==symbol)&&
                        (fields[1+(rowNum-1)*3]==fields[2+(rowNum-1)*3]&&
                          fields[2+(rowNum-1)*3]==fields[3+(rowNum-1)*3]);
        }
    }

    inline bool isColumnFilledWithOneSymbol(unsigned int colNum, Field symbol){
        if((colNum<1) || (colNum>3)){
            // logic error
            return false;
        }else{
            return (fields[colNum]==symbol)&&
                 (fields[colNum]==fields[colNum+3]&&
                    fields[colNum+3]==fields[colNum+6]);
        }
    }

    inline bool isAxisFromLeftTopToBottomRightFilledWithOneSymbol(Field symbol){
        return (fields[1]==symbol)&&
                 (fields[1]==fields[5]&&
                    fields[5]==fields[9]);
    }

    inline bool isAxisFromRightTopToBottomLeftFilledWithOneSymbol(Field symbol){
        return (fields[3]==symbol)&&
                 (fields[3]==fields[5]&&
                    fields[5]==fields[7]);
    }



public:
    Board(){
        setField(Position{1}, Field::Blank);
        setField(Position{2}, Field::Blank);
        setField(Position{3}, Field::Blank);
        setField(Position{4}, Field::Blank);
        setField(Position{5}, Field::Blank);
        setField(Position{6}, Field::Blank);
        setField(Position{7}, Field::Blank);
        setField(Position{8}, Field::Blank);
        setField(Position{9}, Field::Blank);
    }
    bool isWon(){
        return (isWonByX()||isWonByO());
    }

    bool isWonByX(){
        return (isRowFilledWithOneSymbol(1, Field::X) ||
                isRowFilledWithOneSymbol(2, Field::X) ||
                isRowFilledWithOneSymbol(3, Field::X) ||
                isColumnFilledWithOneSymbol(1, Field::X) ||
                isColumnFilledWithOneSymbol(2, Field::X) ||
                isColumnFilledWithOneSymbol(3, Field::X) ||
                isAxisFromLeftTopToBottomRightFilledWithOneSymbol(Field::X) ||
                isAxisFromRightTopToBottomLeftFilledWithOneSymbol(Field::X)    );
    }

    bool isWonByO(){
        return (isRowFilledWithOneSymbol(1, Field::O) ||
                isRowFilledWithOneSymbol(2, Field::O) ||
                isRowFilledWithOneSymbol(3, Field::O) ||
                isColumnFilledWithOneSymbol(1, Field::O) ||
                isColumnFilledWithOneSymbol(2, Field::O) ||
                isColumnFilledWithOneSymbol(3, Field::O) ||
                isAxisFromLeftTopToBottomRightFilledWithOneSymbol(Field::O) ||
                isAxisFromRightTopToBottomLeftFilledWithOneSymbol(Field::O)    );
    }

    bool isDraw(){
        return false;
    }

    unsigned int numberOfFreeFields(){
        return 9;
    }

    std::vector<Field> getFreeFields(){
        std::vector<Field> freeFields{};
        std::copy_if(fields.begin(), fields.end(), std::back_inserter(freeFields), [](Field p){
            return (p == Field::Blank);
        });
        return freeFields;
    }

    void setField(Position pos, Field field){
        fields[static_cast<size_t>(pos)] = field;
    }



};

/// czy gra została wygrana
/// zaczynamy od prostego przypadku
TEST(boardTests, newBoardIsNotWon){
    Board board;
    ASSERT_THAT(board.isWon(),  testing::Eq(false) );
}

TEST(boardTests, newBoardIsNotADraw){
    Board board;
    ASSERT_THAT(board.isDraw(),  testing::Eq(false) );
}

TEST(boardTests, newBoardHasAllFieldsFree){
    Board board;
    ASSERT_THAT(board.numberOfFreeFields(),  testing::Eq(9) );
}


TEST(boardTests, boardCaseOneIsWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::X);
    board.setField(Position{2}, Field::X);
    board.setField(Position{3}, Field::Blank);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::Blank);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::Blank);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action
    board.setField(Position{3}, Field::X);

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}

TEST(boardTests, boardCaseSecondRowFilledIsWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::Blank);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::Blank);
    board.setField(Position{4}, Field::X);
    board.setField(Position{5}, Field::X);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::Blank);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action
    board.setField(Position{6}, Field::X);

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}

TEST(boardTests, boardCaseTwoIsNotWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::X);
    board.setField(Position{2}, Field::X);
    board.setField(Position{3}, Field::Blank);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::Blank);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::Blank);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action
    board.setField(Position{3}, Field::O);

    ASSERT_THAT(board.isWon(),  testing::Eq(false) );
}

TEST(boardTests, boardWithFirstColumnXIsWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::X);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::Blank);
    board.setField(Position{4}, Field::X);
    board.setField(Position{5}, Field::Blank);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::Blank);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action
    board.setField(Position{7}, Field::X);

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}

TEST(boardTests, boardWithXCrossedLeftToRightIsWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::X);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::Blank);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::X);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::Blank);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::X);

    //action

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}


TEST(boardTests, boardWithOCrossedRightToLeftIsWon){
    //precondition
    Board board;
    board.setField(Position{1}, Field::Blank);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::O);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::O);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::O);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}

TEST(boardTests, boardHasFirs){
    //precondition
    Board board;
    board.setField(Position{1}, Field::Blank);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::O);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::O);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::O);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action

    ASSERT_THAT(board.isWon(),  testing::Eq(true) );
}


TEST(boardTests, boardCaseHas6FreeFields){
    //precondition
    Board board;
    board.setField(Position{1}, Field::Blank);
    board.setField(Position{2}, Field::Blank);
    board.setField(Position{3}, Field::O);
    board.setField(Position{4}, Field::Blank);
    board.setField(Position{5}, Field::O);
    board.setField(Position{6}, Field::Blank);
    board.setField(Position{7}, Field::O);
    board.setField(Position{8}, Field::Blank);
    board.setField(Position{9}, Field::Blank);

    //action
    std::vector<Field> freeFields = board.getFreeFields();

    ASSERT_THAT(freeFields.size(),  testing::Eq(6) );
}




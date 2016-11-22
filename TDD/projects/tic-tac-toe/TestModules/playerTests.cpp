#include <gmock/gmock.h>
#include "../External/Interfaces/Field.hpp"


//TEST_F
///bez test suite trzeba uruchamiać makro bez _F
///czy ruch który zrobiliśmy znajdzie się na ekranie

class Player{
public:
    Player(Field symb)
        :
          symbol{symb}
    {
    }

    Field getSymbol(){
        return symbol;
    }

    Field symbol;

};

///player... czy wypełnienie pola odpowiada graczowi
TEST(playerTests, symbolIsEqualToX){
    Field symbol{Field::X};
    Player player{symbol};
    ASSERT_THAT(player.getSymbol(),  testing::Eq(symbol) );
}

TEST(playerTests, symbolIsEqualToO){
    Field symbol{Field::O};
    Player player{symbol};
    ASSERT_THAT(player.getSymbol(),  testing::Eq(symbol) );
}

//

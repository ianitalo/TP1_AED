#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <time.h>
#include "Classes/App.h"
int main(int argc, char* argv[]) {

    App a;
    a = App("Passengers.txt","","","Airports.txt");
    a.menuPrincipal();
    //App::menuPrincipal();
    /*testing::InitGoogleTest(&argc, argv);
    std::cout << "TP1_AED" << std::endl;
    return RUN_ALL_TESTS();*/
}
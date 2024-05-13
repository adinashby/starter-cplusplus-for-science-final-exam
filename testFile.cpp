/* DO NOT MODIFY THIS FILE */

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "labFile.hpp"

TEST_CASE("test1", "Car struct returns correct information") {
    Car myCar = {"Toyota", "Corolla", 2021};
    Car myCar2 = {"Ford", "Fiesta", 2019};
    Car myCar3 = {"Chevrolet", "Camaro", 2020};

    REQUIRE(getCarInfo(myCar) == "Toyota Corolla, 2021");
    REQUIRE(getCarInfo(myCar2) == "Ford Fiesta, 2019");
    REQUIRE(getCarInfo(myCar3) == "Chevrolet Camaro, 2020");
}

TEST_CASE("test2", "Rectangle calculations") {
    Rectangle rect(10.0, 20.0);

    REQUIRE(rect.area() == Approx(200.0));
    REQUIRE(rect.perimeter() == Approx(60.0));
    REQUIRE(rect.getWidth() == Approx(10.0));
    REQUIRE(rect.getHeight() == Approx(20.0));
}

TEST_CASE("Animals speak correctly") {
    Dog dog;
    Cat cat;

    REQUIRE(makeDogSpeak(&dog) == "Bark");
    REQUIRE(makeCatSpeak(&cat) == "Meow");
}
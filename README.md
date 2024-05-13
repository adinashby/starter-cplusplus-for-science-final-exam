# C++ Programming For Science - Final Exam

This template repository is the starter project for C++ Programming For Science Final Exam. Written in C++, and tested with CMake/Catch2.

### Question(s)

1. **(%30)** Create a struct called `Car` that contains three members: make (string), model (string), and year (int). Write a function `getCarInfo` that takes a `Car` struct as a parameter and returns a string in the format: "{make} {model}, {year}".

2. **(%30)** Design a class `Rectangle` that represents a geometric rectangle. Include constructors to initialize the rectangle with width and height. Implement member functions to calculate the area, the perimeter of the rectangle and getters and setters for the fields.

Formula for area: width * height  
Formula for perimeter: 2 * (width + height);  

3. **(%40)** Design a base class `Animal` with a function `speak` that returns a string representing the sound the animal makes. Derive two classes from `Animal`: `Dog` and `Cat`. Override the speak function in both derived classes to return "Bark" for `Dog` and "Meow" for `Cat`. Write a function `makeDogSpeak` that takes a pointer to `Dog` and outputs the sound it makes and another function `makeCatSpeak` that takes a pointer to `Cat` and outputs the sound it makes.

### Setup Command

`make clean`

### Run Command

`make test`
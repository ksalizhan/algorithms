// Example program
#include <iostream>
#include <string>
#include <map>

/*
    maps - data structure, stores key and value
*/

int main()
{
    // create map
    std::map<std::string, int> myMap1;
    myMap1["Kevin"] = 123;
    myMap1["John"] = 32;
    myMap1["Amy"] = 21;
    
    //create map the other way - all at once
    std::map<std::string, int> myMap2 =
    {
        {"Kevin", 123},
        {"John", 32},
        {"Amy", 21},
    };
    
    // access value from key
    int val1 = myMap1.at("Kevin"); // good for exception handling
    int val2 = myMap1["Kevin"];
    
    // other ways to ADD
    myMap1.insert({"Mark", 23}); // insert makes a copy
    myMap1.emplace("Jose", 11); // emplace constructs value in place
    
    // remove
    myMap1.erase("John");
    
    for (const auto& element : myMap1){
        std::cout << element.first << ": " << element.second << "\n";
    }
    auto it = myMap1.find("Jose");
    if (it == myMap1.end()){
        std::cout << "Not found\n";
    }else {
        std::cout << "Found\n";
    }
}

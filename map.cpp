#include <iostream>
#include <map>
#include <string>

std::string intToString(int n) 
{
    std::map<int, std::string> myMap = 
    {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},
        {10, "ten"}
    };

    auto it = myMap.find(n);
    if (it != myMap.end()) 
    {
        return it->second;
    } 
    else 
    {
        return "Number out of range";
    }
}

int main() 
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    std::string result = intToString(number);
    std::cout << "The given number is: " << result << std::endl;
    
    return 0;
}

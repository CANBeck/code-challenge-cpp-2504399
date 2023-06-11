#include <iostream>
#include <vector>
#include <algorithm>

int berechneVolumen(std::vector<int> eingabe)
{
    // todo berechne Volumen
    int length = eingabe.size();
    int max_vol = 0;

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            int current_vol = std::min(eingabe[i], eingabe[j]) * (j - i);
            max_vol = std::max(max_vol, current_vol);
        }
    }
    return max_vol;
}

int main()
{
    std::vector<int> eingabe_1{8, 3, 7, 9, 3, 2, 5, 7, 2, 3, 4};       // erwarteter output 49
    std::vector<int> eingabe_2{1, 1};                                  // erwarteter output 1
    std::vector<int> eingabe_3{8, 6, 2, 5, 4, 8, 3, 7, 9, 3, 2, 5, 7}; // erwarteter output 84

    std::cout << "Max Volumen eingabe 1 " << berechneVolumen(eingabe_1) << std::endl;
    std::cout << "Max Volumen eingabe 2 " << berechneVolumen(eingabe_2) << std::endl;
    std::cout << "Max Volumen eingabe 3 " << berechneVolumen(eingabe_3) << std::endl;

    return 0;
}
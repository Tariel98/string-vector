#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> in_str_digit(std::vector<std::string> my_str)
{   
    std::vector<std::string> result;
    for(int i=0; i<my_str.size(); ++i){
        for(auto n : my_str[i]){
            if(isdigit(n)){
                result.push_back(my_str[i]);
            }
        }
    }
    return result;
}

int main ()
{
    std::vector<std::string> my_vec = {"Hello", "1student", "bestfrends4ever", "bye"};

    std::vector<std::string> result = in_str_digit(my_vec);

    for(int i=0; i<result.size(); ++i)
        std::cout << result[i] << " ";
        
    std::cout << std::endl;
}
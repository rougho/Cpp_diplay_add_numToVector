#include <iostream>
#include <vector>
#include <numeric>


int main()
{

    char user_case = {};
    std::vector <int> my_list{};

        std::cout << "\tWelcome to my Collector!\n";
        std::cout << "====================================\n";
        std::cout << "       P - Print Number\n";
        std::cout << "       A - Add a Number\n";
        std::cout << "       M - Dispay mean of Number\n";
        std::cout << "       S - Dispay the smallest Number\n";
        std::cout << "       L - Dispay the Larges Number\n";
        std::cout << "       Q - Quit\n";
        std::cout << "====================================\n";

        do{ 
            int add_num{};
            std::cout << "Please Chose an Option: ";
            std::cin >> user_case;

            if (user_case == 'p' || user_case == 'P')
            {
                if (my_list.size() == 0) {
                    std::cout << "[] list is empty!\n";
                }
                else {
                    std::cout << "[ ";
                    for (auto num : my_list)
                    {
                        std::cout << num << " ";
                    }
                    std::cout << "]\n";
                }
            }else if (user_case == 'a' || user_case == 'A')
                {
                    int add_num{};
                    std::cout << "please enter a number to add: ";
                    std::cin >> add_num;
                    my_list.push_back(add_num);
                    std::cout << add_num <<" added!\n";
                }else if(user_case == 'm' || user_case == 'M') {
                        if (my_list.size() == 0)
                        {
                            std::cout << "there is no data in your list!\n";
                        }
                        else
                        {
                            int average{};
                            for (auto num : my_list) {
                                average += num;
                            }
                            std::cout << "the average of elements in your list is : " << static_cast<double>(average) / my_list.size() << "\n";
                        }
                }else if (user_case == 's' || user_case == 'S')
                    {
                        if (my_list.size() == 0)
                        {
                            std::cout << "there is no data in your list!\n";
                        }
                        else{
                            int smallest = my_list.at(0);
                            for (auto num : my_list) {
                                if (num < smallest)
                                {
                                    smallest = num;
                                }
                            }
                            std::cout << "the smallest element in your list is : " << smallest << "\n";
                        }
                    }else if (user_case == 'l' || user_case == 'L')
                    {
                        if (my_list.size() == 0)
                        {
                            std::cout << "there is no data in your list!\n";
                        }
                        else {
                            int smallest = my_list.at(0);
                            for (auto num : my_list) {
                                if (num > smallest)
                                {
                                    smallest = num;
                                }
                            }
                            std::cout << "the Laregs element in your list is : " << smallest << "\n";
                        }
                    }else if (user_case == 'q' || user_case == 'Q') {
                            std::cout << "================================= Good Bye ! =================================\n";
                    }
                    else {
                std::cout << "Invalid Selection!Please try again!\n";
                    }
        } while (user_case != 'q' && user_case != 'Q');
    return 0;
}


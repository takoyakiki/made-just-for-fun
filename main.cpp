#include <iostream>
#include <string>
#include <cstdio>

int main()
{
    int count = 0;
    std::cout<<"Hello World \n";
    std::string ss;
    std::cout<<"Do you think this code is written in Python?\n";
    std::cout<<"y / n" << std::endl;
    while(true){
    std::cin >> ss;
    if(ss == "yes" || ss == "y"){
        std::cout << "You can see it...it's written in C++.\n";
        break;
    }else if(ss == "no" || ss == "n"){
        std::cout << "that's right! You'll know it when you see it! C or C++!" << std::endl;
        std::cout << "Now, C language and C++. Which one?\n";
        std::string aa;
        while(true){
        std::cin >> aa;
        if(aa == "C++"|| aa == "c++" || aa == "cpp"){
            std::cout << "yes! correct answer! nice!\n";
            break;
        }else if(aa == "C" || aa == "c"){
            std::cout << "Is that it? Where is #include <stdio.h>?\n";
            std::cout << "Let's take a look at the code.\n";
            break;
        }else{
            std::cout << "What are you talking about?\n";
        }
        }
        break;
    }else{
        
        count += 1;
        
        if(count == 3 || count == 4)
        {
            
        std::cout<<"yes or no!\n";
        
        }else if(count == 5){
            std::cout << "You're saying yes or no! ! ! ! ! You idiot! ! ! ! ! ! You can't even read the letters! ! ! ! !\n";
        }else if (count == 0 || count == 1 || count == 2){
            
        std::cout << "Creepy guy.\n";
        std::cout<<"yes or no\n";
        
        }else{
            std::cout << "that's enough. I'm disappointed in you" << std::endl;
            break;
        }
    }
    }
    return 0;
}
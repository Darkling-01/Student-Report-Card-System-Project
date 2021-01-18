#include <iostream>
#include <fstream>
#include <iomanip>

#define LOG(x) std::cout << x << std::endl;

void adminCheck();

class admin{
    public:
    bool userCheck(std::string user) const{
        if(user == username)
            return true;
        else
            LOG("Wrong Username");
    }

    bool paswrdCheck(std::string paswrd) const{
        if (paswrd == password)
            return true;
        else
            LOG("Wrong Password");
    }

    private:
        std::string username = "Darkling";
        std::string password = "California";
};

int main(void){

    int input{0};

    LOG("====================");
    LOG("\tMENU");
    LOG("1-ADMIN");
    LOG("4-EXIT")

    std::cin >> input;

    switch (input)
    {
    case 1:
        adminCheck();
        break;
    case 4:

        break;
    default:
        break;
    }

    return 0;
}

void adminCheck(){

    admin Admin;
    
    std::string username;
    std::string password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    if((Admin.userCheck(username) && Admin.paswrdCheck(password)) == true)
        LOG("VALID");

}

void adminSettings(){

}
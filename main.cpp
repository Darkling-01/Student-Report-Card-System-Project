#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

#define LOG(x) std::cout << x << std::endl;

void adminCheck();
void createReportCard();
void allStudentsReportCard();

class admin{
    public:
    bool userCheck(std::string user) const{
        if(user == username)
            return true;
        else
            LOG("Wrong Username");
            return false;
    }

    bool paswrdCheck(std::string paswrd) const{
        if (paswrd == password)
            return true;
        else
            LOG("Wrong Password");
            return false;
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
    LOG("2-STUDENT")
    LOG("3-EXIT");

    std::cin >> input;

    switch (input)
    {
    case 1:
        adminCheck();
        break;
    case 2:
        //student login
    case 3:
        EXIT_FAILURE;
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
    
    int input{0};

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    if((Admin.userCheck(username) && Admin.paswrdCheck(password)) == true){
        LOG("====================");
        LOG("1-Create student report card record");
        LOG("2-Read all students report card record");
        LOG("3-Read specific student’s report card record");
        LOG("4-Display all students’ grade report");
        LOG("5-Modify student’s report card record");
        LOG("6-Delete student record");
        LOG("7-MENU")

        std::cin >> input;

        switch (input)
        {
        case 1:
            createReportCard();
            break;
        case 2:
            allStudentsReportCard();
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            main();
            break;
        
        default:
            break;
        }
    }
        

}

void createReportCard(){
    std::string studentName;
    
    std::cout << "Student Name: ";

    std::cin.ignore(); 
    //cin leaves the newline character in the stream. 
    //Adding cin.ignore() to the next line clears/ignores the newline from the stream.
    //This is used mainly with combinations of cin and getline.
    std::getline(std::cin, studentName);
    
    // .txt file is created to save students' information
    
    
}

void allStudentsReportCard(){

}
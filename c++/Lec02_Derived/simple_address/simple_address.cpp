// ################################################### Task #8 description ###################################################
// # 
// ###########################################################################################################################

#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits.h>
#include <math.h>
#include <ostream>
#include <string>
#include <map>

enum class AddressBookOptions { 
    LIST = 1,
    ADD,
    DELETE,
    DELETE_ALL,
    SEARCH,
    CLOSE,
    INVALID
};

static std::unordered_map<std::string,AddressBookOptions> const table = {
    {"add",AddressBookOptions::ADD},
    {"close",AddressBookOptions::CLOSE},
    {"delete",AddressBookOptions::DELETE},
    {"delete_all",AddressBookOptions::DELETE_ALL},
    {"search",AddressBookOptions::SEARCH},
    {"list",AddressBookOptions::LIST}
 };

int main()
{
    std::map<int, std::string> address_book;
    std::map<int, std::string>::iterator address_book_iterator;
    std::string input = "";
    int operation = static_cast<int>(AddressBookOptions::INVALID);
    std::cout << "Welcome to your favorite address book!" << std::endl;

    do
    {
        input = "";
        std::string name = "";
        std::cout << "\n";
        int id;
        std::cout << "What do you want to do?" << std::endl;
        std::cout << std::setw(2) << "| List" << std::setw(20) << " | Lists all users" << std::endl;
        std::cout << std::setw(3) << "| Add" << std::setw(15) << " | Adds a user" << std::endl;
        std::cout << std::setw(6) << "| Delete" << std::setw(15) << " | Deletes a user" << std::endl;
        std::cout << std::setw(2) << "| Delete all" << std::setw(15) << " | Deletes all users" << std::endl;
        std::cout << std::setw(6) << "| Search" << std::setw(15) << " | searchs for a user" << std::endl;
        std::cout << std::setw(7) << "| Close" << std::setw(15) << " | Closes the address book list" << std::endl;
        std::cout << "\n";
        std::cin >> input;
        auto it = table.find(input);
        if (it != table.end()) {
            operation = static_cast<int>(it->second);
        }else
        {
            operation = static_cast<int>(AddressBookOptions::INVALID);
        }
        switch (operation) {
        case static_cast<int>(AddressBookOptions::ADD):
        std::cout << "Enter the user name, please" << std::endl;
        std::cin >> name;
        id =rand();
        address_book.insert({id , name});
        std::cout << "User " << name << " with ID: " << id << " in the address book" <<std::endl;
        break;
        case static_cast<int>(AddressBookOptions::DELETE):
        std::cout << "Enter the id of the user to delete it, please" << std::endl;
        std::cin >> id;
        if (address_book.erase(id) != 0)
        {
            std::cout << "User with ID: " << id << "is deleted succesfully" << std::endl;
        }else
        {
            std::cout << "We didn't find this user to delete it" << std::endl;
        }
        break;
        case static_cast<int>(AddressBookOptions::DELETE_ALL):
        address_book.clear();
        std::cout << "The address book is empty now." << std::endl;
        break;
        case static_cast<int>(AddressBookOptions::LIST):
        if (!address_book.empty()){
            for (address_book_iterator = address_book.begin(); address_book_iterator!=address_book.end(); ++address_book_iterator)
                std::cout << address_book_iterator->first << " -> " << address_book_iterator->second << std::endl;
        }else
        {
            std::cout << "Address Book is empty now" << std::endl;
        }
        break;
        case static_cast<int>(AddressBookOptions::SEARCH):
        std::cout << "Enter the id of the user to search about it, please" << std::endl;
        std::cin >> id;
        if (auto search = address_book.find(id); search !=address_book.end()){
            std::cout << "We found the user with the following name: " << search->second << std::endl;
        }else
        {
            std::cout << "We didn't find this user" << std::endl;
        }
        break;
        case static_cast<int>(AddressBookOptions::INVALID):
        std::cout << "You enterd an invalid value " << input << std::endl;
        break;
        }
    } while(operation != static_cast<int>(AddressBookOptions::CLOSE));
    return 0;
}

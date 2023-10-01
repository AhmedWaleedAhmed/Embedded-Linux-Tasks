#ifndef __String__
#define __String__

#include <iostream>
#include <string.h>

class String{
    private:
        char *str = nullptr;
        unsigned int size = 0;
    public:
        String();                                                   // default construcctor
        explicit String(const char *str);                           // parameter constructor
        String(const char *obj, unsigned int len);                  // parameter constructor
        String(const String& str_copy);                             // Copy constructor
        String(String&& str_move);                                  //move constrcutor


        String& operator=(const String& str_copy);                  // copy assignment operator
        String& operator=(String&& str_move);                       // move assignment operator
        String operator+(const char *str);
        String operator+(const String& str);
        void operator+=(const char *str);
        void operator+=(const String& obj);
        void operator=(const char* str);


        ~String();                                                  // destructor

        friend std::ostream& operator<<(std::ostream& os, const String& obj);
        friend std::istream& operator>> (std::istream& is, String& obj);

        void print();   
        void set1stChar(char value);
        unsigned int length() const;
        bool is_empty() const;
        void clear ();
};

#endif // !__String__
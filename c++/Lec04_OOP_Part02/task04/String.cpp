#include "String.hpp"

String::String() :str(nullptr), size(0){
    std::cout << "Default constructor" << std::endl;
}

String::String(const char *str) :size(0){
    std::cout << "Parameter constructor" << std::endl;
    while (str[this->size++] != '\0');
    this->size--;
    this->str = new char [this->size+1];
    strcpy(this->str, str);
}

String::String(const char *obj, unsigned int len) :size(len){
    std::cout << "Parameter constructor with the size as an argument" << std::endl;
    this->str = new char [this->size+1];
    strcpy(this->str, obj);
}

String::String(const String& str_copy){
    std::cout << "Copy constructor" << std::endl;
    if (str_copy.str != nullptr){
        this->size=str_copy.size;
        this->str=new char[this->size+1];
        strcpy(this->str, str_copy.str);
    }
}

String::String(String&& str_move){
    std::cout << "Move constructor" << std::endl;
    if (&str_move != this){
        this->size=str_move.size;
        str_move.size=0;
        if (str_move.str!=nullptr){
            this->str=str_move.str;
            str_move.str=nullptr;
        }
    }
}

String& String::operator=(const String& str_copy){
    std::cout << "Copy assignment operator" << std::endl;
    if (&str_copy != this){
        this->size=str_copy.size;
        if (this->str != nullptr){
            delete [] this->str;
            this->str=nullptr;
        }
        if (str_copy.str != nullptr){
            this->str=new char[this->size+1];
            strcpy(this->str, str_copy.str);
        }
    }
    return *this;
}

String& String::operator=(String&& str_move){
    std::cout << "Move assignment operator" << std::endl;
    if (&str_move != this){
        if (this->str != nullptr){
            delete [] this->str;
            this->str=nullptr;
        }
        this->size=str_move.size;
        str_move.size=0;
        if (str_move.str != nullptr){
            this->str=str_move.str;
            str_move.str=nullptr;
        }
    }
    return *this;
}

String String::operator+(const char *str){
    std::cout << "String::operator+(const char *str)" << std::endl;
    String res;
    if (str != nullptr){
        while (str[res.size++] != '\0');
        res.size--;
        res.size += this->size;
        res.str = new char [res.size+1];
        strcpy(res.str, this->str);
        int indx = 0;
        for (int i = this->size; i < res.size; i++){
            if (str[indx] != '\0'){
                res.str[i] = str[indx++];
            }
        }
        res.str[res.size]='\0';
    }
    return res;
}

String String::operator+(const String& obj){
    std::cout << "String::operator+(const String& str)" << std::endl;
    String res;
    if (obj.str != nullptr){
        res.size = this->size + obj.size;
        res.str = new char [res.size+1];
        strcpy(res.str, this->str);
        int indx = 0;
        for (int i = this->size; i < res.size; i++){
            if (obj.str[indx] != '\0'){
                res.str[i] = obj.str[indx++];
            }
        }
        res.str[res.size]='\0';
    }
    return res;
}

void String::operator+=(const char *str){
    std::cout << "String::operator+=(const char *str)" << std::endl;
    if (str != nullptr){
        int len = 0;
        while (str[len++] != '\0');
        len--;
        if (this->str == nullptr){
            this->size = len;
            this->str = new char [this->size+1];
            strcpy(this->str, str);
        }else{
            int temp_size = this->size;
            this->size+=len;
            char * temp = new char [this->size+1];
            strcpy(temp, this->str);
            delete [] this->str;
            this->str=temp;
            temp=nullptr;
            int indx = 0;
            for (int i = temp_size; i < this->size; i++){
                if (str[indx] != '\0'){
                    this->str[i] = str[indx++];
                }
            }
            this->str[this->size]='\0';
        }
    }
}

void String::operator+=(const String& obj){
    std::cout << "String::operator+=(const String& obj)" << std::endl;
    if (obj.str != nullptr){
        if (this->str == nullptr){
            this->size = obj.size;
            this->str = new char [this->size+1];
            strcpy(this->str, obj.str);
        }else{
            int temp_size = this->size;
            this->size+=obj.size;
            char * temp = new char [this->size+1];
            strcpy(temp, this->str);
            delete [] this->str;
            this->str=temp;
            temp=nullptr;
            int indx = 0;
            for (int i = temp_size; i < this->size; i++){
                if (obj.str[indx] != '\0'){
                    this->str[i] = obj.str[indx++];
                }
            }
            this->str[this->size]='\0';
        }
    }
}

void String::operator=(const char* str){
    std::cout << "String::operator=(const char* str)" << std::endl;
    if (str != nullptr){
        int len = 0;
        while (str[len++] != '\0');
        len--;
        if (this->str != nullptr){
            delete [] this->str; 
        }
        this->size = len;
        this->str = new char [this->size+1];
        strcpy(this->str, str);
    }
}

String::~String(){
    std::cout << "Destructor" << std::endl;
    if (this->str){
        delete [] this->str;
        this->str=nullptr;
    }
    this->size=0;
}

void String::print(){
    if (this->str != nullptr){
        std::cout << this->str << std::endl;
    }else{
        std::cout << "The string is empty" << std::endl;
    }
}

void String::set1stChar(char value){
    if (this->str != nullptr){
        *this->str=value;
    }
}

unsigned int String::length() const{
    return this->size;
}

bool String::is_empty() const{
    if (this->str == nullptr){
        return true;
    }else
    {
        return false;
    }
}

void String::clear (){
    if (this->str != nullptr){
        delete [] this->str;
        this->str=nullptr;
        this->size=0;
    }
}

std::ostream& operator<<(std::ostream& os, const String& obj){
    if (obj.str != nullptr){
        os << "The String :: " << obj.str << " with size :: " << obj.size;
    }else{
        os << "The string is empty";
    }
    return os;
}

std::istream& operator>> (std::istream& is, String& obj){
    std::cout << "Enter the String, please" << std::endl;
    if (obj.str != nullptr){
        delete [] obj.str;
        obj.str = nullptr;
        obj.size=0;
    }
    int start_size = 10;
    char *str = (char *) malloc(start_size);
    char ch;

    int indx = 0;
    while((ch = is.get()) != '\n'){
        str[indx++] = ch;
        if (indx == start_size){
            str = (char *)realloc(str, sizeof(*str) * (start_size += 20));
        }
    }
    str[indx]='\0';
    obj.str = new char [indx+1];
    strcpy(obj.str, str);
    free(str);
    obj.size=indx--;
    return is;
}

String getObj(){
    String obj;
    return obj;
}
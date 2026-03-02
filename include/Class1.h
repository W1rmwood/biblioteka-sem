#pragma once

#include "Class2.h"
#include <vector>


class Library {
    private:
        std::vector <Book> books;
    
    public:
        Library();
        void addBook(const Book& book);  
        Book* findBookByTitle(const std::string& title);

        int booksCount();

        void printBook();

        Book getBookByIndex(int index);
};

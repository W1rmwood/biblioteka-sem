#pragma once

#include "Class2.h"
#include <vector>


class Library {
    private:
        std::vector <Book> books;
    
    public:
        Library();

        int booksCount();

        void printBook();

        Book getBookByIndex(int index);
};

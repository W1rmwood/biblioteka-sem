#include "Class1.h"
#include <iostream>
#include <stdexcept>
#include <string>

Library::Library(){}

int Library::booksCount() {
    return books.size();
}

void Library::printBook() {
    for (int i = 0; i < books.size(); ++i) {
    std::cout << i << ":" << books[i]."" << std::endl;    //вместо последних кавычек название функции которая возвращает данные о книге
    }
}

Book Library::getBookByIndex(int index) {
    return books[index];
}
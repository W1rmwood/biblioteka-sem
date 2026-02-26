#include "Class2.h"
#include <iostream>


Book::Book() : pages(0), author("Хз"), title("Без названия")
{
}

Book::Book(int pages, const std::string& author, const std::string& title)
    : pages(pages), author(author), title(title)
{
}

int Book::getPages() const
{
    return pages;
}

std::string Book::getAuthor() const
{
    return author;
}

std::string Book::getTitle() const
{
    return title;
}

void Book::setPages(int pages)
{
    this->pages = pages;
}

void Book::setAuthor(const std::string& author)
{
    this->author = author;
}

void Book::setTitle(const std::string& title)
{
    this->title = title;
}

std::string Book::getFullInfo() const
{
    return "Название: " + title +
           " | Афтор: " + author +
           " | Кол-во страниц: " + std::to_string(pages);
}

// Оценка времени чтения
double Book::estimateReadingTime(int pagesPerHour) const
{
    if (pagesPerHour <= 0)
        return 0.0;

    return static_cast<double>(pages) / pagesPerHour;
}

// Вывод информации
void Book::printInfo() const
{
    std::cout << "Название: " << title << std::endl;
    std::cout << "Автар: " << author << std::endl;
    std::cout << "Страниц: " << pages << std::endl;
}
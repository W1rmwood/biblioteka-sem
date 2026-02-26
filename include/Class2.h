#pragma once

#include <string>

class Book
{
private:
    int pages;
    std::string author;
    std::string title;

public:
    Book();
    Book(int pages, const std::string& author, const std::string& title);

    int getPages() const;
    std::string getAuthor() const;
    std::string getTitle() const;

    void setPages(int pages);
    void setAuthor(const std::string& author);
    void setTitle(const std::string& title);

    double estimateReadingTime(int pagesPerHour) const;

    std::string getFullInfo() const;

    void printInfo() const;
};


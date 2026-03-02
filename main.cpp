#include "Class1.h"
#include "Class2.h"
#include "Class3.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace log;

// Небольшое улучшение класса Library для удобства
// Добавьте эти методы в ваш Class1.h и Class1.cpp

int main() {
    
    printMessage("Добро пожаловать в библиотечную систему");
    printLine();
    
    // Создаем библиотеку
    Library myLib;
    
    printTest("Library", "наполнение книгами");
    
    // Создаем книги
    Book book1(480, "Михаил Булгаков", "Мастер и Маргарита");
    Book book2(320, "Антуан де Сент-Экзюпери", "Маленький принц");
    Book book3(720, "Лев Толстой", "Анна Каренина");
    Book book4(224, "Джордж Оруэлл", "1984");
    
    // Добавляем в библиотеку (предполагаем, что такой метод есть)
    // Если нет - можно создать вектор книг отдельно
    std::vector<Book> catalog = {book1, book2, book3, book4};
    
    std::cout << "Всего книг в каталоге" << catalog.size();
    printLine();
    
    printTest("Каталог", "список книг");
    
    // Выводим каталог
    for (size_t i = 0; i < catalog.size(); i++) {
        std::cout << "  " << i+1 << ". " << catalog[i].getFullInfo() << std::endl;
    }
    
    printLine();
    
    // Работа с конкретной книгой
    printTest("Book", "детальная информация");
    
    Book& favorite = catalog[0]; 
    favorite.printInfo();
    
    printLine();

    
    printLine();
    
    printTest("Library", "поиск книг");
    std::string searchAuthor = "Толстой";
    
    std::cout << "Книги автора " << searchAuthor << ":\n";
    
    for (const auto& book : catalog) {
        if (book.getAuthor().find(searchAuthor) != std::string::npos) {
            std::cout << "- " << book.getTitle() << std::endl;
        }
    }
    
    printLine();
    printSuccess("Хорошего чтения!");
    
    return 0;
}
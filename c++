#include <iostream>
#include <vector>
#include <string>

class Book {
public:
    Book(const std::string& title, const std::string& author)
        : title_(title), author_(author) {}

    const std::string& getTitle() const { return title_; }
    const std::string& getAuthor() const { return author_; }

private:
    std::string title_;
    std::string author_;
};

class User {
public:
    User(const std::string& name) : name_(name) {}

    void borrowBook(const Book& book) {
        borrowedBooks_.push_back(book);
    }

    void returnBook(const Book& book) {
        // Implement book return logic
    }

private:
    std::string name_;
    std::vector<Book> borrowedBooks_;
};

class Library {
public:
    void addBook(const Book& book) {
        books_.push_back(book);
    }

    void displayBooks() const {
        std::cout << "Available books:\n";
        for (const auto& book : books_) {
            std::cout << book.getTitle() << " by " << book.getAuthor() << "\n";
        }
    }

private:
    std::vector<Book> books_;
};

int main() {
    Library library;
    library.addBook(Book("The Catcher in the Rye", "J.D. Salinger"));
    library.addBook(Book("To Kill a Mockingbird", "Harper Lee"));

    User user("Alice");
   

    // Display borrowed books for user

    return 0;
}
    
}

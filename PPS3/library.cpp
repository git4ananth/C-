#include <iostream>
#include <cstring>
using namespace std;

class Library
{
private:
    string book_name;
    string author;
    string isbn;

public:
    Library(string book_name, string author, string isbn)
    {
        this->book_name = book_name;
        this->author = author;
        this->isbn = isbn;
    }
    string getBookName()
    {
        return book_name;
    }
    string getAuthor()
    {
        return author;
    }
    string getISBN()
    {
        return isbn;
    }
};

int main()
{
    Library b1("\"The Alchemist\"", "Paulo Coelho", "978-006231");
    string option;
    cout << "Enter the query : ";
    //cin >> option; 
    // Ccin does not work where there are spaces in the input. Use Getline()
    getline(cin, option);
    // strlwr(option);
    if (option == "Book Title")
        cout << b1.getBookName();
    else if (option == "Author Name")
        cout << b1.getAuthor();
    else if (option == "ISBN Number")
        cout << b1.getISBN();

    return 0;
}